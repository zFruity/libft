/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:43:59 by dchuah            #+#    #+#             */
/*   Updated: 2023/02/24 18:21:44 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[strlen] != 0)
		strlen++;
	if (dstsize != 0)
		dstsize = dstsize - 1;
	while (i < dstsize && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (strlen);
}

/*int	main(void)
{
	char src[] = "Hellow World";
	char dst[12];
	printf("%zu, %s", ft_strlcpy(dst, src, 12), dst);
	return (0);
}*/