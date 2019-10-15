/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:02:32 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/14 17:10:07 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;

	if (!*s || ft_strlen(s) < start)
		return (0);
	while (start--)
		s++;
	if (!(c = malloc(len * sizeof(*c))))
		return (0);
	ft_strlcpy(c, s, len);
	return (c);
}
