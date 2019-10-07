#include <string.h>
#include <stdio.h>
#include "ft_memcmp.c"

int main(void)
{
	char s1[] = "123456789";
	char s2[] = "123456789";

	char s3[] = "129";
	char s4[] = "121";

	char s5[] = "qwerty";
	char s6[] = "qwertz";

	char s7[] = "";
	char s8[] = "";

	printf("================ 1 \n\n");

	printf("memcmp : %d \n", memcmp(s1, s2, 9));
	printf("ft_memcmp : %d \n", ft_memcmp(s1, s2, 9));

	printf("================ 2 \n\n");

	printf("memcmp : %d \n", memcmp(s3, s4, 3));
	printf("ft_memcmp : %d \n", ft_memcmp(s3, s4, 3));

	printf("================ 3 \n\n");

	printf("memcmp : %d \n", memcmp(s5, s6, 6));
	printf("ft_memcmp : %d \n", ft_memcmp(s5, s6, 6));

	printf("================ 4 \n\n");

	printf("memcmp : %d \n", memcmp(s7, s8, 0));
	printf("ft_memcmp : %d \n", ft_memcmp(s7, s8, 0));

	return (0);
}
