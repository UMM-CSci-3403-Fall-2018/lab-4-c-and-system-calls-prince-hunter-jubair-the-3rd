#include <ftw.h>
#include <stdlib.h>


static int is_dir;
static int not_dir;

static int callback(const char *fpath, const struct stat *sb, int typeflag) { 

	if (typeflag == FTW_D) {
	
	is_dir++;
	return 0;

	}

	else if (typeflag == FTW_F) {
	
	not_dir++;
	return 0;

	}

	else return 0;

}

#define MAX_FTW_DEPTH 16

int main(int argc, char** argv) { 
    // Check arguments and set things up

    is_dir = 0;
    not_dir = 0;

    ftw(argv[1], callback, MAX_FTW_DEPTH);
    // Print out the results

    printf("There were %d directories. \n", is_dir);
    printf("There were %d regular files. \n", not_dir);    


}
