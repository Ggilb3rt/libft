#include <stdio.h>
#include <string.h>
#include "ft_bzero.c"

int main(void) {
	int i;
	char str1[] = "une phrase";
	char str2[] = "une phrase";

	i = -1;

	bzero(str1, 4);
	ft_bzero(str2, 4);

	printf("en premier le resultat de bzero\nen second le resultat de ft_bzero\n\n");

	while (++i < 10)
		printf("%d.", str1[i]);
	i = -1;
	printf("\n");
	while (++i < 10)
		printf("%d.", str2[i]);
	i = -1;
	printf("\n\n=============\n");

	bzero(str1, 8);
	ft_bzero(str2, 8);

	while (++i < 10)
		printf("%d.", str1[i]);
	i = -1;
	printf("\n");
	while (++i < 10)
		printf("%d.", str2[i]);
	i = -1;
	printf("\n\n=============\n");

	bzero(str1, 9);
	ft_bzero(str2, 9);

	while (++i < 10)
		printf("%d.", str1[i]);
	i = -1;
	printf("\n");
	while (++i < 10)
		printf("%d.", str2[i]);
	i = -1;
	printf("\n\nles negatifs et les overflow nont pas a etre gerer.\n");

	return (0);
}
