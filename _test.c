#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *s)
{	
	int sgn = 1;
	int res = 0;
	if (*s == '-')
	{
		sgn = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
		res = res * 10 + *s++ - '0';
	return (res * sgn);
}

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"01234567890"[n % 10], 1);
}

int is_prime(int n)
{
	int i = 2;
	if (n <= 1)
		return (0);
	while (i * i <= n)
		return (n % i == 0) ? 0 : i++;
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 2)
		ft_putnbr(0);
	else
	{
		int sum = 0;
		int n = ft_atoi(av[1]);

		if (n < 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		else
		{
			while (n > 0)
				if (is_prime(n--))
					sum += n + 1;
			ft_putnbr(sum);
		}
	}

	write(1, "\n", 1);
	return (0);
}