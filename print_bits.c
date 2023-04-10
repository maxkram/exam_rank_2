#include <unistd.h>

void print_bits(unsigned char octet)
{
	int div = 128;
	while (div != 0)
	{
		if (div <= octet)
		{
			write(1, "1", 1);
			octet %= div;
		}
		else
			write(1, "0", 1);
		div /= 2;
	}
}

int main(void)
{
	print_bits(0);
	write(1, "\n", 1);
	print_bits(1);
	write(1, "\n", 1);
	print_bits(2);
	write(1, "\n", 1);
	print_bits(10);
	write(1, "\n", 1);
	print_bits(113);
	write(1, "\n", 1);
	print_bits(255);
	write(1, "\n", 1);
	return 0;
}

// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"

// DESCRIPTION
// This program defines a function print_bits that takes an unsigned char as input and prints its binary representation to the standard output using the write system call from the unistd.h library.

// The print_bits function works by using a loop to iterate through all the bits in the octet from left to right. It starts by initializing a divisor variable div to 128 (which is equal to 2^7). The loop continues until the divisor reaches zero. At each iteration, the function checks if the divisor is less than or equal to the input octet. If it is, then the function prints a '1' to the standard output and subtracts the divisor from the octet. Otherwise, the function prints a '0'. Then, the function divides the divisor by 2 (shifts it one bit to the right) and continues the loop with the new divisor.

// The main function demonstrates how to use the print_bits function by calling it with different unsigned char values and printing a newline character to separate the output for each value. When run, the program outputs the binary representation of each input octet, one per line.