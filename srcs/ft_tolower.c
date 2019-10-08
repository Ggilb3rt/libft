/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:20:07 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/08 13:37:36 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	unsigned char v;

	v = c;
	if (v >= 65 && v <= 90)
	{
		v += 32;
		return (v);
	}
	else
		return (v);
}