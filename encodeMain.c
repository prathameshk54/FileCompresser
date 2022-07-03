#define ENCODE_PROCESS_FILE_C

#include <stdlib.h>
#include "common.h"
#include "encodeProcessFile.h"

int main(int argc, char* argv[]) {
	/* usage validation */
	if (argc != 2) {
		printf("Usage: ./encode <filename>");
		exit(1);
	}

	/* open input file in read mode */
	/* init char map */
	/* process the file to get data */
	/* build the huffman tree */
	/* open output file in write mode */
	/* seek curosr of input file at the beginning */
	/* convert input file into encoded file */
	/* close both the files */
	return 0;
}

#undef ENCODE_PROCESS_FILE_C
