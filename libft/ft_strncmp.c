/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:53:49 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/07 16:14:43 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i] || !s1[i] || !s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[1000];
// 	char	s2[1000];

// 	strcpy(s1, "abc");
// 	strcpy(s2, "abc");
// 	printf("strncmp %d\n", strncmp(s1, s2, 3));
// 	printf("ft_strncmp %d\n", ft_strncmp(s1, s2, 3));
// 	printf("-------------------------\n");
// 	strcpy(s1, "abc");
// 	strcpy(s2, "bac");
// 	printf("strncmp %d\n", strncmp(s1, s2, 3));
// 	printf("ft_strncmp %d\n", ft_strncmp(s1, s2, 3));
// 	printf("-------------------------\n");
// 	strcpy(s1, "acc");
// 	strcpy(s2, "abc");
// 	printf("strncmp %d\n", strncmp(s1, s2, 3));
// 	printf("ft_strncmp %d\n", ft_strncmp(s1, s2, 3));
// 	return (0);
// }
