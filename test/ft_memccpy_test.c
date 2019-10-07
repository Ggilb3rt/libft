#include <stdio.h>
#include <string.h>
#include "ft_memccpy.c"

int main(void)
{
	char src1[] = "123456789";
	char src2[] = "123456789";
	char src3[] = "123456789";
	char src4[] = "123456789";
	char src5[] = "123456789";
	char src6[] = "123456789";
	
	char destination1[] = "aaaaaaaaaa.....|";
	char destination2[] = "uuuuu............|";
	char destination3[] = "iiiiiiiiii...|";
	char destination4[] = "zzzz...........|";
	char destination5[] = ".............|";
	char destination6[] = ".............|";

	char destination1_2[] = "aaaaaaaaaa.....|";
	char destination2_2[] = "uuuuu............|";
	char destination3_2[] = "iiiiiiiiii...|";
	char destination4_2[] = "zzzz...........|";
	char destination5_2[] = ".............|";
	char destination6_2[] = ".............|";

	printf("\n================================ 1\n\n");

	printf("retour de memccpy      : %s\n", memccpy(destination1, src1, 54, 15));
	printf("resultat de memccpy    : %s\n", destination1);

	printf("retour de ft_memccpy   : %s\n", ft_memccpy(destination1_2, src1, 54, 15));
	printf("resultat de ft_memccpy : %s\n", destination1_2);

	printf("\n\n================================ 2\n\n");

	printf("retour de memccpy      : %s\n", memccpy(destination2, src2, 48, 15));
	printf("resultat de memccpy    : %s\n", destination2);

	printf("retour de ft_memccpy   : %s\n", ft_memccpy(destination2_2, src2, 48, 15));
	printf("resultat de ft_memccpy : %s\n", destination2_2);

	printf("\n\n================================ 3\n\n");

	printf("retour de memccpy      : %s\n", memccpy(destination3, src3, 49, 15));
	printf("resultat de memccpy    : %s\n", destination3);

	printf("retour de ft_memccpy   : %s\n", ft_memccpy(destination3_2, src3, 49, 15));
	printf("resultat de ft_memccpy : %s\n", destination3_2);

	printf("\n\n================================ 4\n\n");

	printf("retour de memccpy      : %s\n", memccpy(destination4, src4, 20, 15));
	printf("resultat de memccpy    : %s\n", destination4);

	printf("retour de ft_memccpy   : %s\n", ft_memccpy(destination4_2, src4, 20, 15));
	printf("resultat de ft_memccpy : %s\n", destination4_2);

	printf("\n\n================================ 5\n\n");

	printf("retour de memccpy      : %s\n", memccpy(destination5, src5, 55, 3));
	printf("resultat de memccpy    : %s\n", destination5);

	printf("retour de ft_memccpy   : %s\n", ft_memccpy(destination5_2, src5, 55, 3));
	printf("resultat de ft_memccpy : %s\n", destination5_2);

	printf("\n\n================================ 6\n\n");

	printf("retour de memccpy      : %s\n", memccpy(destination6, src6, 55, 0));
	printf("resultat de memccpy    : %s\n", destination6);

	printf("retour de ft_memccpy   : %s\n", ft_memccpy(destination6_2, src6, 55, 0));
	printf("resultat de ft_memccpy : %s\n", destination6_2);

	printf("\n");
}