int    ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
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