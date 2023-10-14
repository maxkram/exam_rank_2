#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// size_t	ft_strcspn(const char *s, const char *reject)
// {
// 	const char *s1 = s;
// 	while(*s1++)
// 	{
// 		const char *s2 = reject;
// 		while(*s2)
// 			if(*s1 == *s2++)
// 				return s1 - s;
// 	}
// 	return s1 - s;
// }

size_t	ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;

    while (s[i])
    {
		int j = 0;
        while (reject[j])
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

int main()
{
	const char s1[] = "ABCDEF4960910";
	const char s2[] = "013";

	int l1 = strcspn(s1, s2);
	int l2 = ft_strcspn(s1, s2);

	printf("%d\n", l1);
	printf("%d\n", l2);

	return 0;
}

// int main(int ac, char **av)
// {
// 	if(ac == 2)
// 	{
// 		int i = 0;
// 		while(av[1][i])
// 		{

// 		}
// 	}
// 	write(1, "\n", 1);
// 	return 0;
// }