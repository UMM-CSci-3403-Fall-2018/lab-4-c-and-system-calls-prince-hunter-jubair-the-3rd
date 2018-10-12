#include <stdio.h>
#include <stdbool.h>

#define BUF_SIZE 1024

bool is_vowel(char c) { 
	//a,e,i,o,u,A,E,I,O,U
    /* 
     * Returns true if c is a vowel (upper or lower case), and 
     * false otherwise. 
     */
       if (c == char a) {
       return true;
	}
	else if (c == char e) {
	 return true;
 	}
	 else if (c == char i) {
         return true;
        }
      	 else if (c == char o) {
         return true;
        }
      	 else if (c == char u) {
         return true;
        }
      	 else if (c == char A) {
         return true;
        }
      	 else if (c == char E) {
         return true;
        }
      	 else if (c == char I) {
         return true;
        }
      	 else if (c == char O) {
         return true;
        }
      	 else if (c == char U) {
         return true;
        }
       else {
	 return false;
	}


int copy_non_vowels(int num_chars, char* in_buf, char* out_buf) {
    /*
     * Copy all the non-vowels from in_buf to out_buf. 
     * num_chars indicates how many characters are in in_buf, 
     * and this function should return the number of non-vowels that
     * that were copied over.
     */

int num_not_vowels = 0;
int j = 0;
for (int i = 0; i < num_chars; i++) {
    if (!is_vowel(in_buf[i])){
      out_buf[j] = in_buf[i];
      num_not_vowels++;
      j++;
    }
  }
}
  return num_not_vowels;	
}

void disemvowel(FILE* inputFile, FILE* outputFile) { 
    /*
     * Copy all the non-vowels from inputFile to outputFile.
     * Create input and output buffers, and use fread() to repeatedly read
     * in a buffer of data, copy the non-vowels to the output buffer, and
     * use fwrite to write that out. 
     */
	int i, j = 0;
	opInputFile = fopen("inputFile","r+")
	outputFile = (inputFile*) malloc(fopen("outputFile","r+"), sizeof(inputfile));
	for (i = 0; str[i]; i++) {
		if (is_vowel(opInputFile) == false) {
			outputFile[j++] = char c


}

int main(int argc, char *argv[]) { 
    FILE *inputFile; 
    FILE *outputFile;
	switch (argc) {

    // Code that processes the command line arguments 
    // and sets up inputFile and outputFile.

    //1st case if the files don't have anything.
	case 1:
   	 inputFile = stdin;
   	 outputFile = stdout;
	break;
    //2nd case if the 
	case 2:
	inputFile = fopen("inputfile","r");
	outputFile = stdout;
	break;
	case 3:
	inputFile = fopen("inputfile","r");
	outputFile = fopen("outputfile","r+");
	default:
	print("It's too damn high\n");


       	}
    disemvowel(inputFile, outputFile);

    return 0; 
}
