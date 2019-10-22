/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:23:49 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/22 13:45:19 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*temp;
	int				find;

	temp = (char *)s;
	find = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			find = 1;
			temp = (char *)s;
			s++;
		}
		else
			s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	if (find)
		return (temp);
	else
		return (0);
}
