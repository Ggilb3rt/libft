/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:36:52 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/16 15:42:27 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*w_malloc(char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*sn;
	int		i;

	i = 0;
	sn = ft_strtrim(s, &c);
	if (!sn)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(s) * (ft_countc(sn, c) + 2))))
		return (NULL);
	while (*sn)
	{
		if (*sn != c && *sn)
		{
			if (!(tab[i] = w_malloc(sn, c)))
				return (NULL);
			i++;
			while (*sn && *sn != c)
				sn++;
		}
		if (*sn != '\0')
			sn++;
	}
	tab[i] = NULL;
	return (tab);
}
