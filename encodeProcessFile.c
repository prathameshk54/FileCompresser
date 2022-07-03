#define ENCODE_PROCESS_FILE_C

#include<stdlib.h>
#include "common.h"
#include "encodeProcessFile.h"

/**
 *  @desc initializes the character-probability map before reading the file
 */
void initCharMap() {}

/**
 * @desc reads the file, and calculates the probabilities of all the unique characters in it
 * @input (FILE *fp) file pointer of file to be encoded
 * @output (u8_t) returns 0 if success
 * 			  1 if failed
 */
u8_t processFile(FILE *fp) {}

#undef ENCODE_PROCESS_FILE_C
