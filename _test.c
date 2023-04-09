#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;
	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

int is_space(char c)
{
	return (c == 32 || c == 9 || c == '\n') ? 1 : 0;
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i])
			wc++;
		while (str[i] && !is_space(str[i]))
			i++;
	}
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		j = i;
		while (str[i] && !is_space(str[i]))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}

#include <stdio.h>
int main(void)
{
	char **words = ft_split("suka yobani nasos!");
	int i = 0;
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return 0;
}