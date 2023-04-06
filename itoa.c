#include <stdlib.h>

char *ft_itoa(int nbr)
{
    int len = 0;
    long n_tmp = nbr;
    char *str;

    if (nbr == -2147483648)
        return ("-2147483648");
    if (!(str = (char *)malloc(sizeof(char) * len + 1)))
        return (NULL);
    str[len] = '\0';
    if (nbr == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nbr < 0)
    {
        len += 1;
        nbr *= -1;
        str[0] = '-';
    }
    while (n_tmp)
    {
        n_tmp /= 10;
        len += 1;
    }
    while (nbr)
    {
        str[--len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (str);
}

#include <stdio.h>

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