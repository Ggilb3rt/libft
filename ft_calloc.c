/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:08:57 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/22 16:13:17 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *obj;

	if (count == 0 || size == 0)
		return (NULL);
	if (!(obj = malloc(count * size)))
		return (NULL);
	ft_bzero(obj, count * size);
	return (obj);
}
