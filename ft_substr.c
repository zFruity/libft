/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:35:57 by dchuah            #+#    #+#             */
/*   Updated: 2023/02/27 18:21:56 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr || !s)
		return (0);
	if (start >= ft_strlen(s))
		return (substr);
	while (i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = 0;
	return (substr);
}

// int	main(void)
// {
// 	char *str = "01234";
// 	size_t size = 10;
// 	char *ret = ft_substr(str, 10, size);

// 	printf("%s", ret);
// 	return (0);
// }