/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:28:29 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/22 11:50:33 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;

	if (!s1 || !s2)
		return (0);
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	while ((ps1[i] != '\0' || ps2[i] != '\0') && i < n)
	{
		if (ps1[i] == ps2[i])
			i++;
		else if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
	}
	return (0);
}
