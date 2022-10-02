#ifndef ENCODE_PROCESS_FILE_H
#define ENCODE_PROCESS_FILE_H

typedef struct charInfo {
	u8_t character;
	u64_t count;
} charInfo_t;

#ifndef ENCODE_PROCESS_FILE_C
#define EXTERN extern
#else
#define EXTERN 
#endif
EXTERN charInfo_t charMap[MAX_DISTINCT_CHAR];
#undef EXTERN

#if defined(ENCODER_MAIN_C)
/**
 *  @desc	initializes the character-probability map before reading the file
 *  @input
 *  @output
 *  @note
 */
void initCharMap();

/**
 * @desc	reads the file, and calculates the probabilities of all the unique characters in it
 * @input	(FILE *fp) file pointer of file to be encoded, file is assumed to be already opened
 * @output	(u8_t) returns 0 if success, non zero if failed
 * @note	file should already be opened successfully with valid fp
 * 		sortCharMap should not be called before calling this function
 * 		processes file from the given position of fp
 */
u8_t processFile(FILE *fp);

#endif /* ENCODER_MAIN_C */
#endif /* ENCODE_PROCESS_FILE_H */
