/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:37:17 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/08 20:29:59 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcl;
	size_t	dstl;

	srcl = ft_strlen(src);
	dstl = ft_strlen(src);
	while (*src && dstsize > 0)
	{
		printf("tour %zu : dest == %s\n", dstsize, dst);
		dst = (char*)src; /// cette ligne pose probleme
		dstsize--;
		src++;
		dst++;
	}
	
	return (srcl);
}


int main () {
   char src[40];
   char dest[100];
   size_t i = 0;

   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.co");
   i = ft_strlcpy(dest, src, 5);

   printf("valeur de retour %zu\nFinal copied string : %s\n", i, dest);

   return(0);
}
