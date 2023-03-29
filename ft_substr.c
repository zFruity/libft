/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:35:57 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/29 19:20:20 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if ((size_t)start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) - (size_t)start < len)
		len = ft_strlen(s) - (size_t)start;
	substr = ft_calloc((len + 1), sizeof(char));
	if (!substr)
		return (0);
	while (s[start] != 0 && i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
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