/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:22:25 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/14 14:01:47 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	res;
	int		isneg;
	size_t	nlen;

	res = 0;
	isneg = 0;
	nlen = ft_intl(n, 0);
	if (n < 0)
		isneg = nlen++;
	if (!(s = malloc((sizeof(*s) * nlen + 1))))
		return (0);
	if (n == 0)
		*s++ = '0';
	while (n != 0)
	{
		res = n % 10;
		if (isneg)
			res *= -1;
		*s++ = res + '0';
		n /= 10;
	}
	if (isneg)
		*s++ = '-';
	ft_strrev(s - nlen, nlen);
	return (s - nlen);
}

int main()
{
	int n = 2147483647;
	char *s;

	s = ft_itoa(n);
	printf("%s", s);
}
