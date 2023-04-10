#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int is_space(char c)
{
	return (c == 32 || c == 9 || c == '\n') ? 1 : 0;
}

int ft_wordcount(char *str)
{
	int count = 0;
	while (*str)
	{
		if (!is_space(*str))
		{
			count++;
			while (!is_space(*str) && *str)
				str++;
		}
		else
			str++;
	}
	return (count);
}

char **ft_split(char *str)
{
	char **arr = malloc(sizeof(char *) * (ft_wordcount(str) + 1));
	int i = -1;
	int j = 0;
	while (++i < ft_wordcount(str))
	{
		int k = 0;
		while (is_space(str[j]))
			j++;
		while (!is_space(str[j + k]) && str[j + k])
			k++;
		arr[i] = malloc(sizeof(char) * (k + 1));
		k = 0;
		while (!is_space(str[j]) && str[j])
			arr[i][k++] = str[j++];
		arr[i][k] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}

#include <stdio.h>
int main(void)
{
	char **words = ft_split("This is a test string!");
	int i = 0;
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}