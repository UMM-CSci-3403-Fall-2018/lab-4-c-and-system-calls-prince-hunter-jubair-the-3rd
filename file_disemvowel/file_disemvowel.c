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
	 return false
	}
}

int copy_non_vowels(int num_chars, char* in_buf, char* out_buf) {
    /*
     * Copy all the non-vowels from in_buf to out_buf. 
     * num_chars indicates how many characters are in in_buf, 
     * and this function should return the number of non-vowels that
     * that were copied over.
     */


	for (int i = 0; i < num_chars; i++){
	

	}



		
}

void disemvowel(FILE* inputFile, FILE* outputFile) { 
    /*
     * Copy all the non-vowels from inputFile to outputFile.
     * Create input and output buffers, and use fread() to repeatedly read
     * in a buffer of data, copy the non-vowels to the output buffer, and
     * use fwrite to write that out. 
     */
}

int main(int argc, char *argv[]) { 
    FILE *inputFile; 
    FILE *outputFile;

    // Code that processes the command line arguments 
    // and sets up inputFile and outputFile.
    opInputFile = FILE fopen(const char *inputfile, const char "r");
    opOutputFile = FILE fopen(const char *outputfile, const char "w");


    disemvowel(inputFile, outputFile);

    return 0; 
}
