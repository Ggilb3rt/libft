/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:22:25 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/13 16:05:22 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_intl(int n, size_t len)
{
	if (n / 10 == 0)
		return (++len);
	n = n / 10;
	len++;
	len = ft_intl(n, len);
	return (len);
}

char	*ft_strrev(char *s, size_t len)
{
	char	temp[len];
	size_t	base_len;
	size_t	i;

	i = 0;
	base_len = len;
	while (len > 0)
	{
		temp[i] = s[len - 1];
		i++;
		len--;
	}
	i = 0;
	while (i < base_len)
	{
		s[i] = temp[i];
		i++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		res;
	int		isneg;
	size_t	nlen;

	res = 0;
	isneg = 0;
	nlen = ft_intl(n, 0);
	if (n < 0)
	{
		isneg = 1;
		nlen++;
	}
	if (!(s = malloc((sizeof(*s) * nlen + 1))))
		return (0);
	if (n == 0)
	{
		*s = '0';
		s++;
		*s = '\0';
		return (--s);
	}

	while (n != 0)
	{
		res = n % 10;
		if (isneg)
			res *= -1;
		*s = res + '0';
		s++;
		n = n / 10;
	}
	if (isneg)
	{
		*s = '-';
		s++;
	}
	*s = '\0';
	s = s - nlen;
	ft_strrev(s, nlen);
	return (s);
}
