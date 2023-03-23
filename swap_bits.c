#include <stdio.h>

unsigned char swap_bits(unsigned char c)
{
	return ((c >> 4) | (c << 4));
}

int main(void)
{
	char letter_t = 't';
	char letter_G = 'G';

	printf("letter_t after swap: %c\n", swap_bits(letter_t));
	printf("letter_G after swap: %c\n", swap_bits(letter_G));
	return (0);
}

// Assignment name  : swap_bits
// Expected files   : swap_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100