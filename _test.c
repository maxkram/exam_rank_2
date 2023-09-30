#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char *s1 = s;

	while (*s1++)
	{
		const char *s2 = reject;
		while (*s2)
		{
			if (*s1 == *s2++)
				return (s1 - s);
		}
	}
	return (s1 - s);
}

int main()
{
	const char s1[] = "ABCDEF4960910";
	const char s2[] = "013";

	int l1 = strcspn(s1, s2);
	int l2 = ft_strcspn(s1, s2);

	printf("%d\n", l1);
	printf("%d\n", l2);

	return (0);
}