/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:45:04 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/19 17:45:04 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = (ft_strlen(src));
	if (size == 0)
		return (i);
	while (size > 1)
	{
		if (*src == '\0')
			break ;
		*dest++ = *src++;
		size--;
	}
	*dest = '\0';
	return (i);
}

// int	main(void)
// {
// 	char	dest[1000];
// 	char	src[1000];
// 	char	dest1[1000];
// 	char	src1[1000];

// 	strcpy(dest, "12345");
// 	strcpy(src, "apple");
// 	strcpy(dest1, "12345");
// 	strcpy(src1, "apple");
// 	// printf("strlcpy: %s %zu\n", dest, strlcpy(dest, src, 3));
// 	printf("ft_strlcpy: %s %zu\n", dest1, ft_strlcpy(dest1, src1, 4));
// }
