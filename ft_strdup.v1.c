#include <stdlib.h>
char    *ft_strdup(char *src)
{
	char *tmp;
	int len = 0;
	int i = 0;

	while (src[len++])
		;
	tmp = malloc(sizeof(char) * len + 1);
	if (!tmp)
		return (NULL);
	while (src[i++])
		tmp[i] = src[i];
	tmp[i] = '\0';
	return (tmp);
}

#include<stdio.h>
#include<string.h>
 
int main()
{
    char source[] = "GeeksForGeeks";
 
	printf("%s\n", source);

    char* target = strdup(source);
 
    printf("%s\n", target);
    return 0;
}