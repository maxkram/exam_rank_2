char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}
#include <stdio.h>
int main()
{
	char s1[] = "zhopa";
	char s2[] = "pezho";
	printf("%s\n", ft_strcpy(s1, s2));
}