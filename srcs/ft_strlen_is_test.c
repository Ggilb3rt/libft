#include <string.h>
#include <ctype.h>
#include <stdio.h>

#include "ft_strlen.c"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"

int main(void)
{
	char t1[] = "";
	char t2[] = "123";
	char t3[] = "123456789";

	char ascii[129];

	size_t i;

	i = 1;
	while (i < 128)
	{
		ascii[i - 1] = i;
		i++;
	}
	ascii[128] = 0;

	i = 0;

	printf("===== STRLEN =====\n");

	printf("============ 1\n\n");

	printf("strlen : %zu \n", strlen(t1));
	printf("ft_strlen : %zu \n", ft_strlen(t1));

	printf("============ 2\n\n");

	printf("strlen : %zu \n", strlen(t2));
	printf("ft_strlen : %zu \n", ft_strlen(t2));

	printf("============ 3\n\n");

	printf("strlen : %zu \n", strlen(t3));
	printf("ft_strlen : %zu \n", ft_strlen(t3));

	printf("===== is ................ =====\n");
	printf("%zu\n", strlen(ascii));

	while (i < strlen(ascii))
	{
		printf("========== %c ========= %zu \n", ascii[i], i + 1);
		printf("is alpha : %d \n", isalpha(ascii[i]));
		printf("ft_isalpha : %d \n", ft_isalpha(ascii[i]));

		printf("is digit : %d \n", isdigit(ascii[i]));
		printf("ft_digit : %d \n", ft_isdigit(ascii[i]));

		printf("is alnum : %d \n", isalnum(ascii[i]));
		printf("ft_alnum : %d \n", ft_isalnum(ascii[i]));


		printf("is ascii : %d \n", isascii(ascii[i]));
		printf("ft_isascii : %d \n", ft_isascii(ascii[i]));

		printf("is print : %d \n", isprint(ascii[i]));
		printf("ft_isprint : %d \n\n", ft_isprint(ascii[i]));
		i++;
	}
	printf("======== carac non ascii : %c ========\n", (char)(i + 1));
		printf("is alpha : %d \n", isalpha(i + 1));
		printf("ft_isalpha : %d \n", ft_isalpha(i + 1));

		printf("is digit : %d \n", isdigit(i + 1));
		printf("ft_digit : %d \n", ft_isdigit(i + 1));

		printf("is alnum : %d \n", isalnum(i + 1));
		printf("ft_alnum : %d \n", ft_isalnum(i + 1));


		printf("is ascii : %d \n", isascii(i + 1));
		printf("ft_isascii : %d \n", ft_isascii(i + 1));

		printf("is print : %d \n", isprint(i + 1));
		printf("ft_isprint : %d \n\n", ft_isprint(i + 1));


}
