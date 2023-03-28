int    ft_strcmp(char *s1, char *s2)
{
	unsigned int i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>
  
int main(void)
{
    char* first_str = "Geeks2";
    char* second_str = "Geeks1";
  
    printf("First String: %s\n", first_str);
    printf("Second String: %s\n", second_str);
  
    printf("Return value of strcmp(): %d\n",
           strcmp(first_str, second_str));
	printf("Return value of ft_strcmp(): %d\n",
           ft_strcmp(first_str, second_str));
    return (0);
}

// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);