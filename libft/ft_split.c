/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:52:33 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/06 15:59:17 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	sep_times(char const *s, char c)
{
	size_t	i;
	size_t	sept;

	i = 0;
	sept = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			sept++;
		i++;
	}
	return (sept);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	**freeeedaaamm(char **s)
{
	size_t	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**str;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	str = ft_calloc((sep_times(s, c) + 1), sizeof(char *));
	if (!str)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = word_len(&s[i], c);
		if (len == 0)
			break ;
		str[j] = ft_substr(&s[i], 0, len);
		if (str[j++] == NULL)
			return (freeeedaaamm(str));
		i += len;
	}
	return (str);
}

// int	main(void)
// {
// 	char	s[28];
// 	char	c;
// 	char	**tmp;
// 	size_t	i;
//
// 	strcpy(s, "0123,567,,01,,,56789,,,");
// 	c = ',';
// 	i = 0;
// 	tmp = ft_split(s, c);
// 	while (1)
// 	{
// 		printf("ft_split[%zu]:%s\n", i, tmp[i]);
// 		if (tmp[i] == NULL)
// 			break ;
// 		i++;
// 	}
// 	printf("s:%s\n", s);
// 	return (0);
// }
