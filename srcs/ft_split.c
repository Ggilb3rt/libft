/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:36:52 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/13 19:34:02 by ggilbert         ###   ########.fr       */
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
	while (*s++ != c)
		i++;
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
		if (!(*(tab + i) = (char *)malloc(sizeof(char) * len + 1))) //tab[nbc][len]
	   		return (0);
		while (*s != c)
		{
			ft_strlcpy(*(tab + i), s, len + 1);
			printf("%s", *(tab + i));
			//tab++;
			s = s + len;
		}

		i++;
		s++;
	}
	return(tab);
}

int main()
{
	char const *s = "qd1ssdfd1efdfce1gesdf";
	char		c = '1';
	char		**ret;
	
	ret = ft_split(s, c);
	printf("\nres = %s", *ret);
}
