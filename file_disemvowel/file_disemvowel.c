#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define BUF_SIZE 1024

bool is_vowel(char c) {
	//a,e,i,o,u,A,E,I,O,U
    /*
     * Returns true if c is a vowel (upper or lower case), and
     * false otherwise.
     */

     switch(c){
     case 'A':
     case 'a':
     case 'E':
     case 'e':
     case 'I':
     case 'i':
     case 'O':
     case 'o':
     case 'U':
     case 'u':
       return true;
     default:
       return false;
     }
   }



int copy_non_vowels(int num_chars, char* in_buf, char* out_buf) {

int num_not_vowels = 0;
int j = 0;
for (int i = 0; i < num_chars; i++) {
    if (!is_vowel(in_buf[i])){
      out_buf[j] = in_buf[i];
      num_not_vowels++;
      j++;
    }
  }

return num_not_vowels;

}

void disemvowel(FILE* inputFile, FILE* outputFile) {

	char *input_buffer = (char*) calloc(BUF_SIZE,sizeof(char));
	char *output_buffer = (char*) calloc(BUF_SIZE,sizeof(char));
	//reads from the input file
	int opInputFile = fread(input_buffer, sizeof(char), BUF_SIZE, inputFile);


	while(opInputFile > 0){

    int non_vowels = copy_non_vowels(strlen(input_buffer), input_buffer, output_buffer);

    fwrite(output_buffer, sizeof(char), non_vowels, outputFile);

}

}

int main(int argc, char *argv[]) {

    FILE *inputFile;
    FILE *outputFile;

    // Code that processes the command line arguments
    // and sets up inputFile and outputFile.

    //1st case if the files don't have anything. and we want to read from input and write to output.
	if (argc == 1){
   	 inputFile = stdin;
   	 outputFile = stdout;
	}
    //2nd case if we want to read from a file and write to standard output.
	else if (argc == 2){
	inputFile = fopen(argv[1],"r");
	outputFile = stdout;
	}
	//3rd case if we want to read from a file and write to the next file
	else if (argc == 3){
	inputFile = fopen(argv[1],"r");
	outputFile = fopen(argv[2],"w");
	}

  else {
	printf("The number of arguments is too damn high \n");
	}

disemvowel(inputFile, outputFile);


return 0;
}
