#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int div = 128;
	int num = octet;
	while (div != 0)
	{
		if (div <= num)
		{
			write(1, "1", 1);
			num %= div;
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
	return (0);
}
