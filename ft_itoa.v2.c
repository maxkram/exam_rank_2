#include <stdlib.h>

char    *ft_itoa(int nbr);

char	*ft_itoa(int nbr)
{
	char *str;
	char *t;
	char *u;

	if (!(str = (char *)malloc(16)))
		return (NULL);
	t = str;
	(nbr < 0 ? *t++ = '-' : 1);
	if (nbr > 0)
		nbr = -nbr;
	if (nbr <= -10)
	{
		u = ft_itoa(-(nbr / 10));
		while (*u)
			*t++ = *u++;
	}
	*t = '0' - nbr % 10;
	*(t + 1) = '\0';
	return (str);
}

#include <stdio.h>

char        *ft_itoa(int n);

int main(void)
{
	printf("%s\n", ft_itoa(33));
	printf("%s\n", ft_itoa(-33));
	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(98765));
	printf("%s\n", ft_itoa(-98765));
	printf("%s\n", ft_itoa(45));
	printf("%s\n", ft_itoa(-45));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	return (0);
}