char    *ft_strcpy(char *s1, char *s2)
{
	int	i = 0;
	while(s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}
#include <stdio.h>
int main(void)
{
	char str1[] = "Flavio";
	char str2[] = "Gaucho";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
}

// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);