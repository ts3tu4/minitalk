/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 03:27:44 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/28 16:34:55 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (b[i] != (unsigned char)ch)
			i++;
		else
			return (b + i);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	buf[1000];

// 	strcpy(buf, "frfusesf");
// 	printf("memchr %p\n", memchr(buf, 'u', 5));
// 	printf("ft_memchr %p\n", ft_memchr(buf, 'u', 5));
// 	return (0);
// }
