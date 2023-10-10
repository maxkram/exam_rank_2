#include <stdlib.h>
#include <stdio.h>

int space(char c)
{
	return (c==32||c==9||c=='\n'||c=='\0');
}

int wc(char *s)
{
	int c = 0;
	while(*s)
	{
		if(!space(*s))
		{
			c++;
			while(!space(*s) && *s)
				s++;
		}
		else
			s++;
	}
	return c;
}

char **ft_split(char *str)
{
	int len = wc(str);
	char **arr = malloc(sizeof(char *) * (len + 1));
	int i = -1;
	int j = 0;
	while(++i < len)
	{
		int k = 0;
		while(space(str[j]))
			str++;
		while(!space(str[j + k] && str[j + k]))
			k++;
		arr[i] = malloc(sizeof(char) * (k + 1));
		k = 0;
		while(!space(str[j]) && str[j])
			arr[i][k++] = str[j++];
		arr[i][k] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}

int main()
{
	char **w = ft_split("Osti de calisse de ciboire de tabarnak!");
	int i = 0;
	while(w[i])
		printf("%s\n", w[i++]);
	return 0;
}