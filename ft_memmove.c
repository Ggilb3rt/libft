/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:14:37 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/23 10:57:42 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	temp[len];
	unsigned char	*psrc;
	size_t			base_len;
	size_t			i;

	if (!dst && !src)
		return (0);
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	base_len = len;
	i = 0;
	while (len > 0)
	{
		temp[i] = psrc[i];
		i++;
		len--;
	}
	i = 0;
	while (i < base_len)
	{
		pdst[i] = temp[i];
		i++;
	}
	return (dst);
}
