#define HUFFMAN_C

#include <stdlib.h>
#include "common.h"
#include "encodeProcessFile.h"
#include "huffman.h"

/**
 * @desc	sorts the global charMap in ascending order of the count of the characters
 * @input
 * @output
 * @note
 */
void sortCharMap() {

}

/**
 * @desc	builds the huffman tree from the global charMap
 * @input
 * @output
 * @note
 */
u8_t buildHuffmanTreefromCharMap() {
	/* sort the charMap in ascending order of the count */
	sortCharMap();

}

#undef HUFFMAN_C
