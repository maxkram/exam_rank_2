#include <stdlib.h>
char    *ft_strdup(char *src)
{
	char *tmp;
	int len;
	int i;

	len = 0;
	i = 0;
	while (src[len++])
		;
	tmp = malloc(sizeof(char) * len + 1);
	if (!tmp)
		return (NULL);
	while (src[i++])
	{
		tmp[i] = src[i];
	}
	tmp[i] = '\0';
	return (tmp);
}

#include<stdio.h>
#include<string.h>
 
int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
 
    printf("%s", target);
    return 0;
}