/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:00:46 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/28 18:18:20 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	dlen = ft_strlen(dst);
	if (dlen >= dstsize)
		return (slen + dstsize);
	ft_strlcpy(dst + dlen, src, dstsize - dlen);
	return (dlen + slen);
}

// int	main(void)
// {
// 	char	dest[1000];
// 	char	src[1000];

// 	strcpy(dest, "water");
// 	strcpy(src, "cola");
// 	printf("strlcat:%d", strlcat(dest, src, 5));
// 	printf("strlcat:%s", ft_strlcat(dest, src, 4));
// }
