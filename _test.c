int		ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int n = 1;
	int res = 0;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i])
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			res += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'z')
			res += str[i] - 87;	
		i++;
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