/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:29:14 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/11 20:14:40 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

// char	*ft_strcpy(char *dst, const char *src)
// {
// 	size_t	i;

// 	i = 0;
// 	while (src[i])
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	return (dst);
// }

// int	main(void)
// {
// 	char	str1[1000];
// 	size_t	i;

// 	ft_strcpy(str1, "appleApple");
// 	i = 2;
// 	printf("input:(%s)\n", str1);
// 	printf("times: %zu\n", i);
// 	ft_bzero(str1, i);
// 	printf("answer: %c \n", str1[0]);
// 	printf("answer: %c \n", str1[1]);
// 	printf("answer: %c \n", str1[2]);
// 	printf("answer: %c \n", str1[3]);
// 	printf("answer: %c \n", str1[4]);
// 	printf("answer: %c \n", str1[5]);
// 	printf("answer: %c \n", str1[6]);
// 	printf("answer: %c \n", str1[7]);
// }
