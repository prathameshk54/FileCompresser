#ifndef ENCODE_PROCESS_FILE_H
#define ENCODE_PROCESS_FILE_H

typedef struct charMap {
	/* u8_t character[MAX_DISTINCT_CHAR]; */
	int count[MAX_DISTINCT_CHAR];
} charMap_t;

#ifndef ENCODE_PROCESS_FILE_C
#define EXTERN extern
#else
#define EXTERN 
#endif
EXTERN charMap_t charMap;
#undef EXTERN

#ifdef ENCODER_MAIN_C
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
 * @note	file is already opened successfully and fp is valid
 */
u8_t processFile(FILE *fp);
#endif

#endif /* ENCODE_PROCESS_FILE_H */
