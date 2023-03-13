int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int sign = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str++ == '-')
		sign = -1;
	else if (*str == '+')
		str++;
	while (*str)
	{
		int digit;
		if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			digit = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			digit = *str - 'A' + 10;
		else
			break;
		if (digit >= str_base)
			break;
		res = res * str_base + digit;
		str++;
	}
	return (res * sign);
}
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi_base("011", atoi("2")));
	printf("%d\n", ft_atoi_base("16", atoi("8")));
	printf("%d\n", ft_atoi_base("123", atoi("10")));
	printf("%d\n", ft_atoi_base("FF", atoi("16")));
}