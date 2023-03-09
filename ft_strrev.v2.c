#include <stdio.h>
#include <unistd.h>

char *ft_strrev(char *str)
{
	int i = -1;
	int len = 0;
	char tmp;
	while (str[len])
		len++;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_strrev(argv[1]));
	}
	return (0);
}