#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i]&&s2[i]&&s1[i]==s2[i])
		i++;
	return (s1[i]-s2[i]);
}

int main()
{
	char s1[]="abcdef";
	char s2[]="ABCDEF";
	int r1 = strcmp(s1,s2);
	int r2 = ft_strcmp(s1,s2);
	printf("%d\n",r1);
	printf("%d\n",r2);
	return 0;
}