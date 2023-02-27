/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchuah <dchuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:50:40 by dchuah            #+#    #+#             */
/*   Updated: 2023/02/24 16:52:18 by dchuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//move copy shit
// int	main(void)
// {
// 	char src[20] = "HLOLedasd";
// 	char dest[6] = "asdea";

// 	ft_memcpy(dest, src, 4);
// 	puts(dest);
// 	return (0);
// }

// char	str1[50] = "I am going from Delhi to Gorakhpur";
// char	str2[50] = "I am going from Delhi to Gorakhpur";
// int	main(void)
//{
//Use of memmove
// 	printf("Function:\tmemmove with overlap\n");
// 	printf("Orignal :\t%s\n", str1);
// 	printf("Source:\t\t%s\n", str1 + 5);
// 	printf("Destination:\t%s\n", str1 + 11);
// 	ft_memmove(str1 + 11, str1 + 5, 29);
// 	printf("Result:\t\t%s\n", str1);
// 	printf("Length:\t\t%lu characters\n\n", strlen(str1));
// 	//Use of memcpy
// 	printf("Function:\tmemcpy with overlap\n");
// 	printf("Orignal :\t%s\n", str2);
// 	printf("Source:\t\t%s\n", str2 + 5);
// 	printf("Destination:\t%s\n", str2 + 11);
// 	ft_memcpy(str2 + 11, str2 + 5, 29);
// 	printf("Result:\t\t%s\n", str2);
// 	printf("Length:\t\t%lu characters\n\n", strlen(str2));
// 	return (0);
// }
int	main(void)
{
	int size = 15;
	char src[100] = ":(){ :|: & };:";
	char	*t1;
	char	*t2;

	t1 = (char *) ft_memchr(src, '\xde', size);
	printf("%s\n", t1);
	t2 = (char *) memchr(src, '\xde', size);
	printf("%s\n", t2);
}
