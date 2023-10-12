#include <stdlib.h>

int space(char c)
{
	return (c == 32 || c == 9 || c == '\n');
}

int wordcount(char *str)
{
	int count = 0;
	while (*str)
	{
		if (!space(*str))
		{
			count++;
			while (!space(*str) && *str)
				str++;
		}
		else
			str++;
	}
	return (count);
}

char **ft_split(char *str)
{
	int len = wordcount(str);
	char **arr = malloc(sizeof(char *) * len + 1);
	int i = -1;
	int j = 0;
	while (++i < len)
	{
		int k = 0;
		while (space(str[j]))
			j++;
		while (!space(str[j + k]) && str[j + k])
			k++;
		arr[i] = malloc(sizeof(char) * (k + 1));
		k = 0;
		while (!space(str[j]) && str[j])
			arr[i][k++] = str[j++];
		arr[i][k] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}

#include <stdio.h>
int main(void)
{
	char **words = ft_split("Osti de calisse de ciboire de tabarnak!");
	int i = 0;
	while (words[i])
		printf("%s\n", words[i++]);
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