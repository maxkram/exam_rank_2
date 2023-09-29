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

#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[] = "abc123";
    char charset[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t length = strspn(str, charset);
    size_t length1 = ft_strspn(str, charset);
    printf("Length of initial segment: %zu\n", length);
    printf("Length of initial segment: %zu\n", length1);
    return 0;
}

// Assignment name : ft_strspn
// Expected files : ft_strspn.c
// Allowed functions: None
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
// Reproduce exactly the behavior of the strspn function(man strspn).
// The function should be prototyped as follows :
// size_t ft_strspn(const char *s, const char *accept);

// This is a C function called ft_strspn that returns the length of the initial segment of a string s that consists entirely of characters from another string accept. The function takes two arguments: a pointer to a constant character string s and a pointer to a constant character string accept.

// The function works by initializing two integer variables i and c to 0. It then uses a while loop to iterate over each character in the string s. Within this loop, it uses another while loop to iterate over each character in the string accept. If the character in s matches the character in accept, the inner loop breaks. If the inner loop has reached the end of accept (i.e., the character is not found), the function returns the value of i.

// After each iteration of the inner loop, c is reset to 0 and i is incremented. This continues until the end of the string s is reached, at which point the function returns the value of i.

// In other words, the function scans the characters of s and counts how many consecutive characters in s are present in accept, starting from the beginning of s. The function stops counting as soon as it encounters a character in s that is not present in accept, and returns the count of characters in s that were found in accept up until that point.

// The return type of the function is size_t, which is an unsigned integer type commonly used for representing sizes and lengths of objects.