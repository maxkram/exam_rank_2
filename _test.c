#include <unistd.h>

void putnbr42(int n)
{
	if(n > 9)
		putnbr42(n/10);
	write(1, &"0123456789"[n%10], 1);
}

int main(int ac, char **av)
{
	int i = 0;
	while(i++ < 101)
	{
		if(i%15==0)
			write(1, "fizzbuzz", 8);
		else if(i%5==0)
			write(1, "buzz", 4);
		else if(i%3==0)
			write(1, "fizz", 4);
		else
			putnbr42(i);
		write(1, "\n", 1);
	}
	return 0;
}