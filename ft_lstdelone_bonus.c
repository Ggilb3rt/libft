/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:17:05 by ggilbert          #+#    #+#             */
/*   Updated: 2019/10/16 14:15:07 by ggilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = NULL;
	tmp->next = lst->next;
	(*del)((t_list*)lst);
	free(lst);
	lst->next = tmp->next;
}



///////////
void	print_list(t_list *list)
{
	while (list)
	{
		printf("%s\n", list->content);
		list = list->next;
	}
}

t_list	*add_link(t_list *list, char *s)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = s;
		tmp->next = list;
	}
	return (tmp);
}

void	del(void *lst)
{
	t_list	*tmp;

	tmp = (t_list*)lst;
	tmp->content = NULL;
}

int main()
{
	t_list	*list = NULL;

	list = add_link(list, "poule");
	list = add_link(list, "poulet");
	list = add_link(list, "poulette");

	printf("Liste de base :\n");
	print_list(list);

	ft_lstdelone(list, del);
	printf("\nListe free\n");
	print_list(list);
}
