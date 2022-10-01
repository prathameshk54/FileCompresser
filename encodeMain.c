#define ENCODE_PROCESS_FILE_C

#include <stdlib.h>
#include<fcntl.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include "common.h"
#include "encodeProcessFile.h"

int main(int argc, char* argv[]) {
	/* declarations */
	int res;
	FILE *inputFp;
	/* usage validation */
	if (argc != 2) {
		printf("Usage: ./encode <filename>");
		exit(1);
	}

	/* open input file in read mode */
	inputFp = open(argv[1], O_RDONLY);
	if (inputFp < 0) {
		perror("Failed to open file\n");
		return 1;
	}
	/* init char map */
	initCharMap();
	/* process the file to get data */
	res = processFile(inputFp);
	if (res < 0) {
		perror("Failed to process the file\n");
		return 1;
	}
	/* build the huffman tree */
	/* open output file in write mode */
	/* seek curosr of input file at the beginning */
	/* convert input file into encoded file */
	/* close both the files */
	return 0;
}

#undef ENCODE_PROCESS_FILE_C
