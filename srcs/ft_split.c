/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:36:52 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/13 20:29:43 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strlcpy.c"

int		ft_countc(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

int		ft_getlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		s++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nbc;
	int		len;
	int		i;

	nbc = ft_countc(s, c);
	i = 0;
	len = 0;
	if (!(tab = (char **)malloc(sizeof(*tab) * (++nbc)))) // tab[nbc]
		return (0);
	while (*s)
	{
		len = ft_getlen(s, c);
		if (!(*(tab + i) = (char *)malloc(sizeof(tab) * len + 1))) //tab[nbc][len]
	   		return (0);
		while (*s != c && *s)
		{
			ft_strlcpy(*(tab + i), s, len + 1);
			printf("tab + %d = %s\n", i, *(tab + i));
			//tab++;
			s = s + len;
		}
		printf("boucle exterieur\n");
		i++;
		s++;
	}
	return(tab);
}

int main()
{
	char const *s = "ab1cdefg1hijk1lmnopqr";
	char		c = '1';
	char		**ret;
	int			i = 0;

	printf("s = %s\n", s);
	ret = ft_split(s, c);
	while (i < 5)
	{
		printf("\nres[%d] = %s", i, *(ret+i));
		i++;
	}
}
