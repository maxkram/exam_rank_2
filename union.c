#include <unistd.h>

int check (char *s, int max, char c)
{
	int i = -1;
	while (++i < max)
		if (s[i] == c)
			return (0);
	return (1);
}

void ft_union (char *s1, char *s2)
{
	int j = -1;
	int i = -1;
	while (s1[++i])
		if (check(s1, i, s1[i]))
			write(1, &s1[i], 1);
	while (s2[++j])
		if (check(s2, j, s2[j]) && check(s1, i, s2[j]))
			write(1, &s2[j], 1);
}

int main (int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}