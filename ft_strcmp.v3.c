int ft_strcmp (char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char *s1 = "zhopa3";
	char *s2 = "zhopa2";
	printf("%d %d", ft_strcmp(s1, s2), strcmp(s1, s2));
	return (0);
}