/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:37:02 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/02 17:35:57 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	j;

	j = 0;
	if (!s || !f)
		return ;
	while (s[j])
	{
		f(j, &s[j]);
		j++;
	}
}

// void	first_func(unsigned int i, char *c)
// {
// 	*c += i;
// }

// int	main(void)
// {
// 	char	c[100000];

// 	ft_striteri(c, first_func);
// 	printf("result:%d\n", strcmp(c, "123456"));
// }
