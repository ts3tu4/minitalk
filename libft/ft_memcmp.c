/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:56:07 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/28 16:36:03 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[1000];
// 	char	s2[1000];

// 	strcpy(s1, "frfusesf");
// 	strcpy(s2, "123456789");
// 	printf("memcmp %d\n", memcmp(s1, s2, 3));
// 	printf("ft_memcmp %d\n", ft_memcmp(s1, s2, 3));
// 	return (0);
// }
