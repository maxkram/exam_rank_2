int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "abcdef";
	char s2[] = "ABCDEF";

	int r1 = strcmp(s1, s2);
	int r2 = ft_strcmp(s1, s2);

	printf("%d\n", r1);
	printf("%d\n", r2);

	return (0);
}

// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);