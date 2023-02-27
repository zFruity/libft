/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove**.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:39:24 by dchuah            #+#    #+#             */
/*   Updated: 2023/02/24 15:16:41 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!d && !s)
		return (NULL);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	while (n-- > 0)
		d[n] = s[n];
	return (dest);
}

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	char	*cdst;
// 	char	*csrc;
// 	char	temp[len];
// 	size_t	i;

// 	i = 0;
// 	cdst = (char *)(dst);
// 	csrc = (char *)(src);

// 	while ()
// 	while (temp[i] != 0)
// 	{
// 		temp[i] = *csrc;
// 		i++;
// 		csrc++;
// 	}
// 	i = 0;
// 	while (i < len)
// 	{
// 		*cdst = temp[i];
// 		cdst++;
// 		i++;
// 	}
// 	return (dst);
//}
