char *ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		int i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char *)s1;
			i++;
		}
		s1++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str1[] = "abcde2fghi3jk4l";
	const char str2[] = "34";

	char *ret = strpbrk(str1, str2);
	char *ret1 = ft_strpbrk(str1, str2);

	if (ret)
		printf("First matching character: %c\n", *ret);
	else
		printf("Character not found");

	if (ret1)
		printf("First matching character: %c\n", *ret1);
	else
		printf("Character not found");
	return (0);
}

// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);