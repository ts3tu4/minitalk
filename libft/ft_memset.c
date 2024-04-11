/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:43:00 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/15 15:43:00 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int ch, size_t n)
{
	size_t			j;
	unsigned char	*tmp;

	tmp = str;
	j = 0;
	while (j < n)
	{
		*tmp = (unsigned char)ch;
		tmp++;
		j++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str1[] = "applepen";
// 	int	x;
// 	size_t i;

// 	i = 2;
// 	x = 'B';
// 	printf("input:(%s)\n", str1);
// 	printf("times: %zu \n", i);
// 	printf("input: %d \n", x);
// 	ft_memset(str1, x, i);
// 	printf("answer: %s \n", str1);
// }
