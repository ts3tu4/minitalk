/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 03:06:16 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/14 15:24:10 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s || len == 0)
		return (dest);
	if (d < s)
		ft_memcpy(dest, src, len);
	else
	{
		while (len--)
			*(d + len) = *(s + len);
	}
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
// 	memmove(src +3, src, 4);
// 	printf("memmove:%s\n", src);
// 	printf("-------------------------\n");
// 	printf("dest2:%s\n", src1);
// 	ft_memmove(src1 +3, src1, 4);
// 	printf("my_memmove:%s\n", src1);

// 	return (0);
// }
