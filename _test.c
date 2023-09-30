#include <stdio.h>
#include <string.h>
#include <unistd.h>

// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{

// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(i);
		i++;
		write(1, "\n", 1);
	}

	return (0);
}