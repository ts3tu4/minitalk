/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:19:27 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/06 16:49:37 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len - 1]) != NULL)
		len--;
	str = ft_substr((char *)s1, 0, len);
	return (str);
}

// int	main(void)
// {
// 	char	s1[1000];
// 	char	set[1000];

// 	strcpy(s1, "");
// 	strcpy(set, "");
// 	printf("ft_strtrim:%s", ft_strtrim(s1, set));
// }
