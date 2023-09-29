#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char *s1 = s;

	while (*s1)
	{
		const char *s2 = reject;
		while (*s2)
		{
			if (*s1 == *s2++)
				return (s1 - s);
		}
		s1++;
	}
	return (s1 - s);
}

#include <stdio.h>
#include <string.h>

int main()
{
	const char str1[] = "ABCDEF4960910";
	const char str2[] = "013";

	int len = strcspn(str1, str2);
	int len1 = ft_strcspn(str1, str2);

	printf("First matched character is at %d\n", len + 1);
	printf("First matched character is at %d\n", len1 + 1);

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