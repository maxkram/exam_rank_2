#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;

	while (s[i])
	{
		int	j = 0;
		while (reject[j])
		{
			if(s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s)
// 	{
// 		if (*s == c)
// 			return ((char *)s);
// 		s++;
// 	}
// 	return ((void *)0);
// }

// size_t	ft_strcspn(const char *s, const char *reject)
// {
// 	size_t	i = 0;
	
// 	while (s[i])
// 	{
// 		if (ft_strchr(reject, s[i]))
// 			break;
// 		i++;
// 	}
// 	return (i);
// }

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