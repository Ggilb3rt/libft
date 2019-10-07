#include <stdio.h>
#include <string.h>
#include "ft_memcpy.c"

int main(void) {
	char *src1 = "source";
	char *src2 = "tutu";
	char *src3 = "";
	char *src4 = "okokok";

	char *src1_2 = "source";
	char *src2_2 = "tutu";
	char *src3_2 = "";
	char *src4_2 = "okokok";

	char destination1[40] = "123456789abcdefghijklmnop";
	char destination2[40] = "123456789abcdefghijklmnop";
	char destination3[40] = "123456789abcdefghijklmnop";
	char destination4[40] = "123456789abcdefghijklmnop";

	char destination1_2[40] = "123456789abcdefghijklmnop";
	char destination2_2[40] = "123456789abcdefghijklmnop";
	char destination3_2[40] = "123456789abcdefghijklmnop";
	char destination4_2[40] = "123456789abcdefghijklmnop";


	printf("memcpy retour = %s\n", memcpy(destination1, src1, 4));
	printf("memcpy result = %s\n", destination1);
	printf("ft_memcpy retour = %s\n", ft_memcpy(destination1_2, src1_2, 4));
	printf("ft_memcpy result = %s\n", destination1_2);
	printf("\n\n=========================\n\n");

	printf("memcpy retour = %s\n", memcpy(destination2, src2, 6));
	printf("memcpy result = %s\n", destination2);
	printf("ft_memcpy retour = %s\n", ft_memcpy(destination2_2, src2_2, 6));
	printf("ft_memcpy result = %s\n", destination2_2);
	printf("\n\n=========================\n\n");

	printf("memcpy retour = %s\n", memcpy(destination3, src3, 4));
	printf("memcpy result = %s\n", destination3);
	printf("ft_memcpy retour = %s\n", ft_memcpy(destination3_2, src3_2, 4));
	printf("ft_memcpy result = %s\n", destination3_2);
	printf("\n\n=========================\n\n");

	printf("memcpy retour = %s\n", memcpy(destination4, src4, 0));
	printf("memcpy result = %s\n", destination4);
	printf("ft_memcpy retour = %s\n", ft_memcpy(destination4_2, src4_2, 0));
	printf("ft_memcpy result = %s\n", destination4_2);
}