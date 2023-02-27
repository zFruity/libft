/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:21:30 by dchuah            #+#    #+#             */
/*   Updated: 2023/02/24 18:52:18 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (i < len && *haystack != 0)
	{
		while (*haystack == needle[j] && i < len && *haystack != 0)
		{
			haystack++;
			j++;
			i++;
			if (needle[j] == 0)
				return ((char *)haystack - j);
		}
		haystack++;
		i++;
	}
	return (0);
}
