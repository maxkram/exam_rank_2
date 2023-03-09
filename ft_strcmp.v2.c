int ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (!*s1 && !s2)
			return (0);
	return (*--s1 - *--s2);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}