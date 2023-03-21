/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:44:00 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/21 19:00:19 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_splitcounter(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			count = count + 1;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_store(const char *s, int tempmalloc, int i)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * (tempmalloc + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, &s[i - tempmalloc], tempmalloc + 1);
	new[tempmalloc + 1] = 0;
	return (new);
}

char	**ft_assign(char **split, const char *s, char c)
{
	int		count;
	int		tempmalloc;
	size_t	i;

	tempmalloc = 0;
	count = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (i <= ft_strlen(s) + 1)
	{
		if (s[i] == c || (s[i] == 0 && tempmalloc != 0))
		{
			split[count] = ft_store(s, tempmalloc, i);
			tempmalloc = 0;
			count++;
			while (s[i] == c)
				i++;
		}
		tempmalloc++;
		i++;
	}
	split[count] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		count;

	if (s == 0)
		return (0);
	count = ft_splitcounter(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (0);
	split = ft_assign(split, s, c);
	return (split);
}

// int	main(void)
// {
// 	char *s = "                  olol";
// 	char **result = ft_split(s, ' ');

// 	int i = -1;
// 	while (result[++i])
// 		printf("%s\n", result[i]);
// 	free(result);
// 	return (0);
// }