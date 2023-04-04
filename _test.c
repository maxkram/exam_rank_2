#include <stdlib.h>
#include <stdio.h>

int ft_isspace(char c)
{
	return (c == 32 || c == '\n' || c == '\t');
}

int count_word(char *str)
{
	int cnt;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			cnt++;
			while (*str && ft_isspace(*str))
				str++;
		}
	}
	return (cnt);
}

char *malloc_word(char *str)
{
	char *word;
	int i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char *str)
{
	char **arr = (char **)malloc(sizeof(char *) * (count_word(str) + 1));
	int i = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && ft_isspace(*str))
		{
			arr[i] = malloc_word(str);
			i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}