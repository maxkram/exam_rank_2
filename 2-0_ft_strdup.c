#include <stdlib.h>

char *ft_strdup(char *str)
{
	int len = 0;
	int i = -1;
	while (str[len])
		len++;
	char *strcpy = (char *)malloc(sizeof(char) * (len + 1));
	if (!strcpy)
		return (NULL);
	while (str[++i])
		strcpy[i] = str[i];
	strcpy[i] = '\0';
	return (strcpy);
}

// C program to demonstrate strdup()
#include <stdio.h>
#include <string.h>

int main()
{
	char source[] = "GeeksForGeeks";

	// A copy of source is created dynamically
	// and pointer to copy is returned.
	char *target = strdup(source);
	char *target1 = ft_strdup(source);

	printf("%s\n", target);
	printf("%s\n", target1);

	return 0;
}

// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);