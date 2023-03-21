/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:05:10 by dchuah            #+#    #+#             */
/*   Updated: 2023/03/21 22:15:30 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ilen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	ft_geta(int n)
{
	return ((n % 10) + 48);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = 0;
	len = ft_ilen(n);
	str = malloc((len + 1) * (sizeof(char)));
	if (!str)
		return (0);
	str[len--] = 0;
	if (n < 0)
	{
		str[count] = '-';
		count++;
		n = n * -1;
	}
	while (len >= count)
	{
		str[len] = ft_geta(n);
		n = n / 10;
		len--;
	}
	return (str);
}

// int	main(void)
// {
// 	char *i1 = ft_itoa(-623);
// 	char *i2 = ft_itoa(-2147483648);
// 	char *i3 = ft_itoa(-0);

// 	printf("%s\n", i1);
// 	printf("%s\n", i2);
// 	printf("%s\n", i3);
// }