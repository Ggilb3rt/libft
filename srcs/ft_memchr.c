/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:11:43 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/08 13:59:04 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *ps;

	ps = s;
	while (n--)
	{
		if (*ps != c)
			ps++;
		else
			return ((void *)ps);
	}
	return (0);
}
