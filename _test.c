#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char *s1 = s;
	while(*s1++)
	{
		const char *s2=reject;
		while(*s2)
			if(*s1==*s2++)
				return (s1-s);
	}
	return (s1 - s);
}

int main()
{
	const char str1[] = "ABCDEF4960910";
	const char str2[] = "013";

	int len = strcspn(str1, str2);
	int len1 = ft_strcspn(str1, str2);

	printf("%d\n", len + 1);
	printf("%d\n", len1 + 1);
}