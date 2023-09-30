#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *str)
{
	int len = 0;
	int i = -1;
	while (str[len])
		len++;
	char *strcpy = (char *)malloc(sizeof(char) * (len + 1));
	if (!strcpy)
		return (NULL);
	while (str[++i])
		strcpy[i] = str[i];
	strcpy[i] = '\0';
	return (strcpy);
}

int main(void)
{
	char src[] = "blaHblaH!";
	char *trgt1 = strdup(src);
	char *trgt2 = ft_strdup(src);

	printf("%s\n", trgt1);
	printf("%s\n", trgt2);

	return (0);
}