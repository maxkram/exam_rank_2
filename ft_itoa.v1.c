#include <stdlib.h>

static long int	ft_abs(long int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

static int	ft_len(long int nbr)
{
	int	len;

	if (nbr <= 0)
		len = 1;
	else
		len = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		ln;
	int		sign;
	char	*c;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	ln = ft_len(n);
	c = (char *)malloc(sizeof(char) * ln + 1);
	if (c == NULL)
		return (0);
	c[ln] = '\0';
	ln--;
	while (ln >= 0)
	{
		c[ln] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
		ln--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
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