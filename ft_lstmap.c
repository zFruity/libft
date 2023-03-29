/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:56:00 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/29 16:53:55 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*counter;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (0);
	new = 0;
	counter = lst;
	while (counter != 0)
	{
		tmp = ft_lstnew(f(counter->content));
		if (tmp == 0)
		{
			ft_lstclear(&new, del);
			ft_lstclear(&lst, del);
			break ;
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
		counter = counter->next;
	}
	return (new);
}
