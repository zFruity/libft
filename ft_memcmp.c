/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:49:53 by dchuah            #+#    #+#             */
/*   Updated: 2023/02/24 16:41:29 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*str1c;
	unsigned char	*str2c;

	str1c = (unsigned char *)str1;
	str2c = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (str1c[i] != str2c[i])
		{
			return (str1c[i] - str2c[i]);
		}
		i++;
	}
	return (0);
}
