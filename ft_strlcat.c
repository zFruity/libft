/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:43:59 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/29 21:23:01 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	if ((dst == 0 && dstsize == 0) || ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	while (src[i] != 0 && i < dstsize - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = 0;
	return (dstlen + srclen);
}

// int	main(void)
// {
// 	char src[21] = "Hello World i am sed";
// 	char dst[9] = "asdfqwer";

// 	printf("%zu\n", ft_strlcat(dst, src, 8));
// 	printf("%s\n", dst);
// 	return (0);
// }