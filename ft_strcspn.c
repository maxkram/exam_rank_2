#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	while (s[i])
	{
		int j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "fcba73";
	char keys[] = "1234567890";
	int i = ft_strcspn(str, keys);
	printf("The first number in str is at position %d.\n", i + 1);
	int j = strcspn(str, keys);
	printf("The first number in str is at position %d.\n", j + 1);
	return (0);
}

// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);