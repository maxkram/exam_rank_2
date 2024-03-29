// char *ft_strpbrk(const char *s1, const char *s2)
// {
// 	while (*s1)
// 	{
// 		int i = 0;
// 		while (s2[i])
// 		{
// 			if (*s1 == s2[i])
// 				return (char *)s1;
// 			i++;
// 		}
// 		s1++;
// 	}
// 	return (0);
// }

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return ((void *)0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return ((char *)s1);
		s1++;
	}
	return ((void *)0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "1234567890";

	char sym[] = "9876";
	
	printf ("\"%s\" - Кусок первой строки в котором впервые встречаются символы из второй строки.\n", strpbrk(str,sym));

	printf ("\"%s\" - Кусок первой строки в котором впервые встречаются символы из второй строки.\n", ft_strpbrk(str,sym));
}

// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);