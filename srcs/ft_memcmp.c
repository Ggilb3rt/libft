/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:28:29 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/07 20:04:47 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ps1;
	const char	*ps2;

	ps1 = s1;
	ps2 = s2;
	while (n > 0)
	{
		if (*ps1 != *ps2)
		{
			printf("ps1 > ps2 ;\n ps1 == %s ; ps2 == %s \n", ps1, ps2);
			return (ps1-ps2);
		}
		ps1++;
		ps2++;
		n--;
	}
	return (0);
}
