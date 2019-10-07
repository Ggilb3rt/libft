#include <stdio.h>
#include <string.h>
#include "ft_memchr.c"

int main(void)
{
	char test1[] = "salut test v";

	printf("============== 1 \n\n");
	
	printf("memchr : %s \n", memchr(test1, 't', 12));
	printf("ft_memchr : %s \n\n", ft_memchr(test1, 't', 12));

	printf("============== 2 \n\n");
 
        printf("memchr : %s \n", memchr(test1, 't', 3));
        printf("ft_memchr : %s \n\n", ft_memchr(test1, 't', 3));

	printf("============== 3 \n\n");
	
	printf("memchr : %s \n", memchr(test1, 'x', 12));
	printf("ft_memchr : %s \n\n", ft_memchr(test1, 'x', 12));

	printf("============== 4 \n\n");
 
        printf("memchr : %s \n", memchr(test1, 's', 0));
        printf("ft_memchr : %s \n\n", ft_memchr(test1, 's', 0));

	printf("============== 5 \n\n");
	
	printf("memchr : %s \n", memchr(test1, 'v', 12));
	printf("ft_memchr : %s \n\n", ft_memchr(test1, 'v', 12));

	printf("============== 6 \n\n");
 
        printf("memchr : %s \n", memchr(test1, 'p', 100));
        printf("ft_memchr : %s \n\n", ft_memchr(test1, 'p', 100));

	printf("size_t donc pas de cas negatif a gerer... \n");
	return (0);
}
