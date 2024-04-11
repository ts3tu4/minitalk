/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:55:30 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/14 18:07:48 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char	s1[1000];

// 	strcpy(s1, "1234");
// 	printf("strdup:%p\n", strdup(s1));
// 	printf("ft_strdup:%p\n", ft_strdup(s1));
// 	printf("---------------\n");
// 	strcpy(s1, "abcddd");
// 	printf("strdup:%p\n", strdup(s1));
// 	printf("ft_strdup:%p\n", ft_strdup(s1));
// }
