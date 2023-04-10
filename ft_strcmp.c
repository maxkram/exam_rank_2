int ft_strcmp(char *s1, char *s2)
{
    unsigned int i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[15];
    char str2[15];

    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");

    int ret = ft_strcmp(str1, str2);

    if (ret < 0)
        printf("str1 is less than str2");
    else if (ret > 0)
        printf("str2 is less than str1");
    else
        printf("str1 is equal to str2");

    return (0);
}

// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);