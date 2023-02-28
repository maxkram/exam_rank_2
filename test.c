#include <stdio.h>
int main(void)
{
	unsigned int ua = 12;
	signed int sa   = -11;
	printf("ua = %d, ua >> 2 = %d\n", ua, ua >> 2);
	printf("sa = %d, sa >> 2 = %d\n", sa, sa >> 2);
	printf("(unsigned) sa = %u, sa >> 2 = %u\n", sa, sa >> 2);
	printf("sa = %d, ((unsigned) sa) >> 2 = %d", sa, ((unsigned) sa) >> 2);
}