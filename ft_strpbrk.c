#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (0);
	while(*s1)
	{
		int i = 0;
	   	while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
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
    char s1[] = "geeksforgeeks";
    char s2[] = "app";
    char s3[] = "kite";
    char* r, *t;
    r = ft_strpbrk(s1, s2); 
    if (r != 0)
        printf("First matching character: %c\n", *r);
    else
        printf("Character not found");

    t = ft_strpbrk(s1, s3);
    if (t != 0)
        printf("\nFirst matching character: %c\n", *t);
    else
        printf("Character not found");
	return 0;
}

// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);