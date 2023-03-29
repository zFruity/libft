/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:21:30 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/29 18:38:21 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (*haystack != 0 && i < len)
	{
		j = 0;
		while (haystack[j] && needle[j] && haystack[j] == needle[j] && i
			+ j <= len - 1)
		{
			j++;
		}
		if (needle[j] == 0)
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (0);
}
