/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:15:43 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/16 16:08:11 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*pdst;
	const char	*psrc;

	pdst = dst;
	psrc = src;
	while (n > 0)
	{
		if (*psrc != c)
		{
			*pdst = *psrc;
			pdst++;
			psrc++;
			n--;
		}
		else
		{
			*pdst = *psrc;
			pdst++;
			return (pdst);
		}
	}
	return (0);
}
