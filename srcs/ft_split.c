/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:36:52 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/10 13:46:10 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

int		ft_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (++i);
}

char	**ft_split(char const *s, char c)
{
	char **tab;
	int		count;

	count = ft_count(s, c);
	if (!(tab = malloc(sizeof(**tab) * (ft_strlen(s) - count))))
		return (0);
	while (*s)
	{
		while (*s != c)
		{
			*tab = (char*)s;
			s++;
			tab++;
		}
		s++;
	}
	return(tab);
	// je crois que c'est n'importe quoi
}

int main()
{
	char const *s = "qd1sdf1sdffsa1ge";
	char		c = '1';
	char		**ret;
	
	ret = ft_split(s, c);
	printf("%s", *ret);
	// bus error !!!
}
