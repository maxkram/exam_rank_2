#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int c = 0;
    
    while (s[i])
    {
        while (accept[c])
        {
            if (s[i] == accept[c])
                break;
            else if (accept[c + 1] == '\0')
                return (i);
            c++;
        }
        c = 0;
        i++;
    }
    return (i);
}

int main(void)
{
	char s[] = "hellpo";
	char accept[] = "oehl";
	size_t num = ft_strspn(s, accept);
	size_t num1 = strspn(s, accept);
	printf("%ld\n", num);
	printf("%ld", num1);
}

// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);