/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:51:39 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/07 18:51:00 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *pdst;
	const char *psrc;

	pdst = dst;
	psrc = src;
	while (n > 0)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
		n--;
	}
	return (dst);
}
