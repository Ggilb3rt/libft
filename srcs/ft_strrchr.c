/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:23:49 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/14 17:09:30 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	char			*temp;
	int				find;

	ch = c;
	temp = (char *)s;
	find = 0;
	while (*s)
	{
		if (*s == ch)
		{
			find = 1;
			temp = (char *)s;
			s++;
		}
		else
			s++;
	}
	if (ch == '\0')
		return ((char *)s);
	if (find)
		return (temp);
	else
		return (0);
}
