/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 03:00:05 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/14 15:16:40 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest || !src)
		return (NULL);
	while (len--)
		*d++ = *s++;
	return (dest);
}

// int	main(void)
// {
// 	char	src[1000];
// 	char	src1[1000];

// 	printf("-------------------------\n");
// 	strcpy(src, "123456789");
// 	strcpy(src1, "123456789");
// 	printf("dest1:%s\n", src);
// 	memcpy(src +3, src, 4);
// 	printf("memcpy:%s\n", src);
// 	printf("-------------------------\n");
// 	printf("dest2:%s\n", src1);
// 	ft_memcpy(src1 +3, src1, 4);
// 	printf("my_memcpy:%s\n", src1);

// 	return (0);
// }
