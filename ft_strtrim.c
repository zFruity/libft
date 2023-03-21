/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:41:31 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/01 20:39:41 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || set)
		return (0);
	s2 = malloc((ft_strlen(s1) + 1 - ft_strlen(set)) * sizeof(char));
	if (!s2)
		return (0);
	while (s1[i] != 0 && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j >= i && ft_strchr(set, s1[j]))
		j++;
	while (i <= j)
	{
		s2[k] = s1[i];
		k++;
		i++;
	}
	s2[k] = 0;
	return (s2);
}

int main() {
    char str1[] = "   Hello, world!   ";
    char set1[] = " ";
    char *trimmed_str1 = ft_strtrim(str1, set1);
    printf("Original string: '%s'\n", str1);
    printf("Trimmed string: '%s'\n", trimmed_str1);
    free(trimmed_str1);

    char str2[] = "ABCdefABC";
    char set2[] = "ABC";
    char *trimmed_str2 = ft_strtrim(str2, set2);
    printf("Original string: '%s'\n", str2);
    printf("Trimmed string: '%s'\n", trimmed_str2);
    free(trimmed_str2);

    char str3[] = "abcdef";
    char set3[] = "abc";
    char *trimmed_str3 = ft_strtrim(str3, set3);
    printf("Original string: '%s'\n", str3);
    printf("Trimmed string: '%s'\n", trimmed_str3);
    free(trimmed_str3);

    return 0;
}