/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:51:52 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/08 15:17:48 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char ch;

	ch = c;
	while (*s)
	{
		if (*s != ch)
			s++;
		else
			return ((char *)s);
	}
	if (ch == '\0')
		return ((char *)s);
	return (0);
}
