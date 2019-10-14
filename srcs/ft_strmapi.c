/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:21:02 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/14 17:08:05 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;
	size_t			slen;

	i = 0;
	slen = ft_strlen(s);
	if (!(new = malloc(sizeof(*new) * slen + 1)))
		return (0);
	while (*s)
	{
		new[i] = (*f)(i, *s);
		i++;
		s++;
	}
	return (new);
}
