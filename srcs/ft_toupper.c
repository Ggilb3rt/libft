/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:10:16 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/08 13:37:55 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	unsigned char v;

	v = c;
	if (v >= 97 && v <= 122)
	{
		v -= 32;
		return (v);
	}
	else
		return (v);
}