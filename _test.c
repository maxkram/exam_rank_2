#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main(void)
{
	char t = 't';
	char G = 'G';

	printf("letter_t after swap: %c\n", swap_bits(t));
	printf("letter_G after swap: %c\n", swap_bits(G));
	return (0);
}