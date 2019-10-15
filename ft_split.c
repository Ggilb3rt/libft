/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:36:52 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/15 19:29:50 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strlcpy.c"
#include "ft_strtrim.c"

int		ft_countc(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			i++;
			while (*s && *s == c)
				s++;
		}
		if (*s != '\0')
			s++;
	}
	return (i);
}

int		ft_getlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s != c)
	{
		s++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*sn;
	int		i;
	int		j;

	i = 0;
	j = 0;
	sn = ft_strtrim(s, &c);
	printf("\nsn = %s\n", sn);
	if (!sn)
		return (0);
	if (!(tab = malloc(sizeof(s) * ft_countc(sn, c) + 1)))
		return (0);
	while (*sn)
	{
		if (*sn != c)
		{
			j = 0;
			if (!(tab[i] = malloc(sizeof(*s) * ft_getlen(sn, c) + 1)))
				return (0);
			while (*sn && *sn != c)
				tab[i][j++] = *sn++;
			tab[i++][j] = '\0';
		}
		if (*sn != '\0')
			sn++;
	}
	return (tab);
}

int main()
{
	char const *s = "111lorem1ipsum11dolor1sit1amet,1consectetur1adipiscing1elit.1Sed1non1risus.1Suspendisse11";
	char		c = '1';
	char		**ret;
	int			i = 0;
	char		*sn = ft_strtrim(s, &c);
	int			nbc = ft_countc(sn, c);

	printf("s = %s\n------------\n nbc = %d\n", s, nbc);
	ret = ft_split(s, c);
	while (i < nbc + 1)
	{
		printf("\nres[%d] = %s", i, *(ret+i));
		i++;
	}
}
