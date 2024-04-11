/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:26:22 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/12 14:29:23 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c += ('a' - 'A');
	return (c);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'S';
// 	printf("input:%c\n", c);
// 	printf("answer:%c\n", tolower(c));
// 	printf("output:%c\n", ft_tolower(c));
// 	c = 's';
// 	printf("input:%c\n", c);
// 	printf("answer:%c\n", tolower(c));
// 	printf("output:%c\n", ft_tolower(c));
// 	c = '1';
// 	printf("input:%c\n", c);
// 	printf("answer:%c\n", tolower(c));
// 	printf("output:%c\n", ft_tolower(c));
// }
