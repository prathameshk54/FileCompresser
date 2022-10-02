#ifndef HUFFMAN_H
#define HUFFMAN_H

typedef struct huffNode {
	u8_t character;
	u64_t count;
	struct huffNode *parent;
	struct huffNode *left;
	struct huffNode *right;
} huffNode_t;

typedef struct huffTree {
	huffNode_t *root;
} huffTree_t;

#ifdef HUFFMAN_C
/**
 * @desc	sorts the global charMap in ascending order of the count of the characters
 * @input
 * @output
 * @note
 */
void sortCharMap();

#endif /* HUFFMAN_C */

#ifdef ENCODER_MAIN_C
/**
 * @desc	builds the huffman tree from the global charMap
 * @input
 * @output
 * @note
 */
u8_t buildHuffmanTreefromCharMap();

#endif /* ENCODER_MAIN_C */
#endif /* HUFFMAN_H */
