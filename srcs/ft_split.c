/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:36:52 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/14 10:20:41 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_countc(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

int		ft_getlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		s++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nbc;
	int		len;
	int		i;

	nbc = ft_countc(s, c);
	i = 0;
	len = 0;
	if (!(tab = (char **)malloc(sizeof(*tab) * (++nbc))))
		return (0);
	while (*s)
	{
		len = ft_getlen(s, c);
		if (!(*(tab + i) = (char *)malloc(sizeof(char) * len + 1)))
			return (0);
		if (*s != c && *s)
		{
			strlcpy(*(tab + i), s, len + 1);
			s = s + len;
		}
		i++;
		if (*s)
			s++;
	}
	return (tab);
}
