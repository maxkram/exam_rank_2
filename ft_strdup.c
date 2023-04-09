#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = 0;
	int len = 0;

	while (src[len])
		len++;
	char *strcpy = (char *)malloc(sizeof(char) * len + 1);
	if (!strcpy)
		return (NULL);
	while (src[i])
	{
		strcpy[i] = src[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char *greet = "ft_strdup";
	char *test1 = "Gonna pass this test, even if I gotta dup!\n";
	char *test2 = ft_strdup(test1);

	printf("%s\n", ft_strdup(greet));
	printf("test1: %s", test1);
	printf("test2: %s", test2);

	char *greet1 = "strdup";
	printf("%s\n", strdup(greet1));
	printf("test1: %s", test1);
	printf("test2: %s", test2);
	return (0);
}

// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);