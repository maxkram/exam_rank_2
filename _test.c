char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int get_digit(char c, int base)
{
	int max;
	if (base <= 10)
		max = base + '0';
	else
		max = base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int sgn = 1;
	int dgt;
	if (*str == '-')
	{
		sgn = -1;
		++str;
	}
	
	while (dgt = get_digit(to_lower(*str), str_base) >= 0)
	{
		res = res * str_base + dgt * sgn;
		++str;
	}
	return (res);
}

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi_base("011", 2));
	printf("%d\n", ft_atoi_base("16", 8));
	printf("%d\n", ft_atoi_base("123", 10));
	printf("%d\n", ft_atoi_base("12fdb3", 16));
	printf("%d\n", ft_atoi_base("12FDB3", 16));
	return (0);
}