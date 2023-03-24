/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 18:16:50 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/24 19:48:19 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = content;
	head->next = 0;
	return (head);
}

// int	main(void)
// {
// 	char	*data;
// 	t_list	*l;

// 	data = "hello, i'm a data";
// 	l = ft_lstnew(data);
// 	printf("%s", l->content);
// }
