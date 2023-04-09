#include <stdlib.h>
#include <stdio.h>

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

// Assignment name : ft_split
// Expected files : ft_split.c
// Allowed functions : malloc
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

// Write a function that takes a string,
// 	splits it into words, and returns them as a NULL - terminated array of strings.
// A "word" is defined as a part of a string delimited either by spaces /
// tabs / new lines,
// 	or by the start / end of the string.

// Your function must be declared as follows :

// 	char **	ft_split(char *str);

// DESCRIPTION
// The code above implements a function ft_split that takes a string as input and splits it into words, returning them as a NULL - terminated array of strings.

// The ft_split function first counts the number of words in the string by iterating through it and incrementing a word count
// variable(wc) whenever a non-whitespace character is encountered after a sequence of whitespace characters. Then, it allocates memory for the array of strings (out) using malloc based on the word count.

// Next, the function iterates through the string again, this time copying each word into a newly allocated string and storing it in the out array. The ft_strncpy function is used to copy each word into its own string, and k is used to keep track of the current index in out.

// Finally, the out array is terminated with a NULL pointer and returned.

// In the main function, the ft_split function is called with a test string, and the resulting array of words is printed out using a while loop. Each word is also freed after it is printed out, and the entire words array is freed at the end of the program to prevent memory leaks.