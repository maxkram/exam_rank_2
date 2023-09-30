#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

size_t ft_strspn(const char *s, const char *accept)
{
	int i = 0;

	while (s[i])
	{
		int j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			else if (accept[j + 1] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int main()
{
    char str[] = "abc123";
    char charset[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t length = strspn(str, charset);
    size_t length1 = ft_strspn(str, charset);
    printf("Length of initial segment: %zu\n", length);
    printf("Length of initial segment: %zu\n", length1);
    return 0;
}