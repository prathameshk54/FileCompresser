#define ENCODE_PROCESS_FILE_C

#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "common.h"
#include "encodeProcessFile.h"

/**
 *  @desc	initializes the character-probability map before reading the file
 *  @input
 *  @output
 *  @note
 */
void initCharMap() {
	int i;
	for (i = 0; i < MAX_DISTINCT_CHAR; i++) {
		charMap[i].character = (u8_t)i;
		charMap[i].count = 0;
	}
}

/**
 * @desc	reads the file, and calculates the probabilities of all the unique characters in it
 * @input	(FILE *fp) file pointer of file to be encoded, file is assumed to be already opened
 * @output	(u8_t) returns 0 if success, non zero value if failed
 * @note	file should already be opened successfully with valid fp
 * 		every character is assumed to be present at its index
 * 		processes file from the given position of fp
 */
u8_t processFile(FILE *fp) {
	u8_t c;
	int res;
	while(1) {
		res = read(fp, &c, sizeof(c));
		if (res <= 0) {
			break;
		} else {
			charMap[c].count++;
		}
	}
	return res;
}

#undef ENCODE_PROCESS_FILE_C
