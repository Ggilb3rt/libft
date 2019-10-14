/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:28:29 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/14 16:59:22 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	ps1 = s1;
	ps2 = s2;
	while (n > 0)
	{
		if (*ps1 > *ps2)
			return (ps1 - ps2);
		if (*ps1 < *ps2)
			return (ps2 - ps1);
		ps1++;
		ps2++;
		n--;
	}
	return (0);
}
