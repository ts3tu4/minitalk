/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:20:00 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/14 19:02:16 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[1000];
// 	int		c;

// 	c = 'b';
// 	strcpy(s, "abaaba");
// 	printf("strrchr %p\n", strrchr(s, c));
// 	printf("ft_strrchr %p\n", ft_strrchr(s, c));
// }
