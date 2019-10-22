/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:35:30 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/22 14:05:39 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*c;
	size_t	s1l;
	
	if (!s1)
		s1l = 0;
	else
		s1l = ft_strlen(s1);
	if (!(c = (char*)malloc((s1l + 1) * sizeof(*c))))
		return (0);
	ft_strlcpy(c, s1, s1l + 1);
	return (c);
}
