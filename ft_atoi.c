int ft_isspace(int c)
{
	return ((c > 8 && c < 14) || c == 32 ? 1 : 0);
}

int ft_isdigit(int c)
{
	return (c > 47 && c < 58 ? 1 : 0);
}

int	ft_atoi(const char *str)
{
	int res = 0;
	int i = 0;
	int s = 1;

	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return (res *= s);
}

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *s = "  		025820385";
	printf("%d %d", ft_atoi(s), atoi(s));
	return (0);
}