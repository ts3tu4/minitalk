/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:57:16 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/28 16:05:48 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_c;
	size_t	n_c;

	h_c = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (h_c < len && haystack[h_c] != '\0')
	{
		n_c = 0;
		while (h_c + n_c < len && haystack[h_c + n_c] == needle[n_c]
			&& needle[n_c] != '\0' && haystack[h_c + n_c] != '\0')
			n_c++;
		if (!needle[n_c])
			return ((char *)(haystack + h_c));
		h_c++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	haystack[1000];
// 	char	needle[1000];
//
// 	strcpy(haystack, "acdefghudwfseufhisuhhuiaiiuiudwbbc");
// 	strcpy(needle, "bbc");
// 	printf("strnstr:%s\n", strnstr(haystack, needle, 3));
// 	printf("ft_strnstr:%s\n", ft_strnstr(haystack, needle, 36));
// 	return (0);
// }
