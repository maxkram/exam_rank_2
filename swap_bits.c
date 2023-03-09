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