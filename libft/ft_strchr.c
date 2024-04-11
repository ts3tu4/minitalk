/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/8 01:54:52 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/28 02:00:34 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if ((char) c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (s[i] == (char )c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[1000];
// 	int		c;

// 	strcpy(s, "asdfggthh");
// 	c = '\0';
// 	printf("strchr:%p\n", strchr(s, c));
// 	printf("ft_strchr:%p\n", ft_strchr(s, c));
// }
