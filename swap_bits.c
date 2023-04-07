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

// DESCRIPTION

// The function takes an unsigned char c as input, which is an 8 - bit integer.The function then swaps the 4 most significant bits(bits 7 - 4) with the 4 least significant bits(bits 3 - 0) of the input c and returns the result.

// Here's how it works step by step:

//(c >> 4) shifts the bits of c to the right by 4 positions,
// 	effectively moving the 4 most significant bits of c to the 4 least significant positions.For example, if c is 0b10101100, c >> 4 will yield 0b00001010.

//(c << 4) shifts the bits of c to the left by 4 positions,
// 	effectively moving the 4 least significant bits of c to the 4 most significant positions.For example, if c is 0b10101100, c << 4 will yield 0b11000000.

// The
//| operator performs a bitwise OR operation between the shifted versions of c.This effectively merges the 4 least significant bits of c with the 4 most significant bits of c,
//  	resulting in the swapped bits.For example, if c is 0b10101100, c >> 4 yields 0b00001010, and c << 4 yields 0b11000000. The | operation between these two yields 0b11001010, which is the result of swapping the bits of c.

// The result is returned as an unsigned char.

// In the main function,
//  	the program calls swap_bits on two characters, 't' and 'G'.Since characters in C are represented as ASCII values(which are 8 - bit integers), these characters are passed as unsigned chars to the swap_bits function.When the swapped result is printed using printf, the characters 'h' and 'g' are printed respectively.