/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:22:54 by dchuah            #+#    #+#             */
/*   Updated: 2023/02/24 16:57:03 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*str1;

	str1 = (char *)(str);
	i = 0;
	while (i < n)
	{
		if (*str1 == c)
			return (str1);
		i++;
		str1++;
	}
	return (0);
}
