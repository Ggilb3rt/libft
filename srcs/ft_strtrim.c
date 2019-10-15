/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:28:09 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/14 17:25:35 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_first(char const *s1, char const *set)
{
	size_t	i;
	char	*pattern;

	i = 0;
	pattern = (char*)set;
	while (1)
	{
		if (*pattern == *s1)
		{
			s1++;
			pattern = (char*)set;
			i++;
		}
		else if (*pattern)
		{
			pattern++;
		}
		else
			break ;
	}
	return (i);
}

size_t	ft_get_last(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1l;
	char	*pattern;

	i = 0;
	s1l = ft_strlen(s1);
	pattern = (char*)set;
	s1 += s1l - 1;
	while (1)
	{
		if (*pattern == *s1)
		{
			s1--;
			pattern = (char*)set;
			i++;
		}
		else if (*pattern)
		{
			pattern++;
		}
		else
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*c;
	size_t	first;
	size_t	last;
	size_t	final;
	size_t	s1l;

	first = ft_get_first(s1, set);
	last = ft_get_last(s1, set);
	s1l = ft_strlen(s1);
	final = s1l - first - last;
	if (!(c = malloc((final + 1) * sizeof(*c))))
		return (0);
	s1 += first;
	ft_strlcpy(c, s1, final + 1);
	return (c);
}
