/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:53:25 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/29 18:41:20 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;

	if (size != 0 && count >= SIZE_MAX / size)
		return (0);
	alloc = malloc(count * size);
	if (!alloc)
		return (0);
	ft_bzero(alloc, count * size);
	return (alloc);
}
