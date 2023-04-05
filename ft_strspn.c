#include <stdio.h>
#include <string.h>

size_t ft_strspn(const char *s, const char *accept)
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

int main()
{
    int len = strspn("geeks for geeks", "geek");
    int len1 = ft_strspn("geeks for geeks", "geek");

    printf("Length of initial segment matching : %d\n", len);
    printf("Length of initial segment matching : %d\n", len1);

    return (0);
}

// Assignment name : ft_strspn
// Expected files : ft_strspn.c
// Allowed functions: None
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
// Reproduce exactly the behavior of the strspn function(man strspn).
// The function should be prototyped as follows :
// size_t ft_strspn(const char *s, const char *accept);