/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:22:50 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/29 18:21:07 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char *d1 = strchr(src, '\0');
// 	char *d2 = ft_strchr(src, '\0');

// 	//printf("%s", d1);
// 	printf("%s", d2);
// 	if (d1 == d2)
// 		printf("1");
// 	else
// 		return (0);
// }