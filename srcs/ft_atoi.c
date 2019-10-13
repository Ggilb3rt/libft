/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:41:17 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/09 15:06:00 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str++ == '-')
		sign *= -1;
	while (ft_isdigit(*str) && *str)
	{
		res = res * 10 + ((char)*str - '0');
		str++;
	}
	return (res);
}