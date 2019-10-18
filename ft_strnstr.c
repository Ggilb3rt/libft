/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:36:40 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/18 13:04:12 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*start;
	char	*pattern;
	size_t	c;

	while (*haystack && len)
	{
		start = (char*)haystack;
		pattern = (char*)needle;
		c = len;
		while (*haystack && *pattern && *haystack == *pattern && c)
		{
			haystack++;
			pattern++;
			c--;
		}
		if (!*pattern)
			return (start);
		haystack = start + 1;
		len--;
	}
	if (!*haystack && !*needle)
		return ((char*)haystack);
	return (0);
}
