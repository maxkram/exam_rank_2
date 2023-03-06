char *ft_strcpy(char *dest, char *src)
{
	while ((*dest++ = *src++))
		;
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char hero[] = "pacman";
	char villian [] = "frogger";

	ft_strcpy(hero, villian);
	printf("%s\n", hero);
	return 0;
}