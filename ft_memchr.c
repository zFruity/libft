/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:22:54 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/29 18:20:02 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1;

	str1 = (unsigned char *)(str);
	i = 0;
	while (i < n)
	{
		if (*str1 == (unsigned char)c)
			return (str1);
		i++;
		str1++;
	}
	return (0);
}
