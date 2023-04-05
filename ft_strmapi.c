/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:21:59 by dchuah            #+#    #+#             */
/*   Updated: 2023/04/05 19:13:37 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;

	i = 0;
	if (!s || !f)
		return (0);
	s2 = malloc((sizeof(char) * (ft_strlen(s) + 1)));
	if (!s2)
		return (0);
	while (s[i] != 0)
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = 0;
	return (s2);
}
