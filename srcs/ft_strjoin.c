/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:13:43 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/09 20:13:07 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	s1l;
	size_t	s2l;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	if(!(c = malloc((s1l + s2l + 1) * sizeof(*c))))
		return (0);
	while (*s1)
	{
		c = (char*)s1;
		s1++;
		c++;
	}
	if(*c)
		c++;
	while (*s2)
	{
		c = (char*)s2;
		s2++;
		c++;
	}
	*c++ = '\0';
	return (c);
}

int main()
{
	char const *pre = "prefixe";
	char const *su = "sufffixe";
	char *b;

	b = ft_strjoin(pre, su);
	printf("%s", b);
	// bus error !!!
}
