/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:05:11 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/29 21:23:02 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_recursivesplit(const char *s, int row, char separator)
{
	int		i;
	char	*str;
	char	**split;

	i = 0;
	while (s[i] && s[i] != separator)
		i++;
	str = ft_substr(s, 0, i);
	if (!str)
		return (0);
	while (s[i] && s[i] == separator)
		i++;
	if (s[i] == 0)
		split = ft_calloc((row + 2), (sizeof(char *)));
	else
		split = ft_recursivesplit(s + i, row + 1, separator);
	if (!split)
		return (0);
	split[row] = str;
	return (split);
}

char	**ft_split(const char *s, char c)
{
	if (!s)
		return (0);
	while (*s && *s == c)
		s++;
	if (!*s)
		return (ft_calloc(1, sizeof(char *)));
	return (ft_recursivesplit(s, 0, c));
}

// int	main(void)
// {
// 	ft_split("ccccccccccccccćæ", 'c');
// 	return (0);
// }
