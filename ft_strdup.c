#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i = 0;
	int	length = 0;
	char	*strcpy;

	while (src[length])
		length++;
	strcpy = malloc(sizeof(*strcpy) * (length + 1));
	if (strcpy != NULL)
	{
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}

#include <stdio.h>
char    *ft_strdup(char *src);

int main(void) {
	char *greet = "Salut";
	char *test1 = "Gonna pass this test, even if I gotta dup!\n";
	char *test2 = ft_strdup(test1);

	printf("%s\n", ft_strdup(greet));
	printf("test1: %s", test1);
	printf("test2: %s", test2);
}


// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);