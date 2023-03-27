#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	int sgn = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str == 32)
		sgn = -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sgn * res);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr(i / 10);
	write(1, &"0123456789"[i % 10], 1);
}

int main(int ac, char **av)
{
	int i = 1;
	if (ac == 2)
	{
		int n = ft_atoi(av[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}