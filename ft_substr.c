/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:02:32 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/16 17:01:17 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;

	if (!*s || ft_strlen(s) < start)
		return (NULL);
	while (start--)
		s++;
	if (!(c = malloc(len * sizeof(*c) + 1)))
		return (0);
	ft_strlcpy(c, s, len + 1);
	return (c);
}
