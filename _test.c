#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "ft_list.h"
// #include "flood_fill.h"
// #include "sort_list.h"

int sp(char c)
{
	return c==32||c==9||c=='\n';
}

int wc(char *s)
{
	int cnt = 0;
	while(*s)
	{
		if(!sp(*s))
		{
			cnt++;
			while(!sp(*s) && *s)
				s++;
		}
		else
			s++;
	}
	return cnt;
}

char **ft_split(char *s)
{
	int len = wc(s);
	char **arr = malloc(sizeof(char *) * len + 1);
	if (!arr)
		return NULL;
	int i = -1;
	int j = 0;
	while (++i < len)
	{
		while(sp(s[j]))
			j++;
		int k = 0;
		while(!sp(s[j + k]) && s[j + k])
			k++;
		arr[i] = malloc(sizeof(char) * k + 1);
		if(!arr[i])
			return NULL;
		k = 0;
		while(!sp(s[j]) && s[j])
			arr[i][k++] = s[j++];
		arr[i][k] = '\0';
	}
	arr[i] = NULL;
	return arr;
}

int main()
{
	char **arr=ft_split("zhopa s ru4koy shla na slu4ku");
	int i = 0;
	while(arr[i])
		printf("%s\n", arr[i++]);
	return 0;
}