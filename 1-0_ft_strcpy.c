char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "C programming";
	char str2[20];
	char str3[20];

	// copying str1 to str2
	strcpy(str2, str1);
	ft_strcpy(str3, str1);

	puts(str2); // C programming
	puts(str3); // C programming

	return 0;
}

// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);