/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:08:10 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/07 15:06:58 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	size_check(long long num)
{
	size_t		i;

	i = 1;
	if (num < 0)
	{
		i++;
		num *= -1;
	}
	while (num >= 10)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*str;
	long long	num;

	num = n;
	len = size_check(num);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("size_check1:%zu\n", size_check(INT_MAX));
// 	printf("ft_itoa1:%s\n-------\n", ft_itoa(INT_MAX));
// 	printf("size_check2:%zu\n", size_check(INT_MIN));
// 	printf("ft_itoa2:%s\n-------\n", ft_itoa(INT_MIN));
// 	printf("size_check3:%zu\n", size_check(0));
// 	printf("ft_itoa3:%s\n-------\n", ft_itoa(0));
// 	printf("size_check4:%zu\n", size_check(1));
// 	printf("ft_itoa4:%s\n-------\n", ft_itoa(1));
// 	printf("size_check5:%zu\n", size_check(-1));
// 	printf("ft_itoa5:%s\n-------\n", ft_itoa(-1));
// 	printf("size_check6:%zu\n", size_check(42));
// 	printf("ft_itoa6:%s\n-------\n", ft_itoa(42));
// 	printf("size_check7:%zu\n", size_check(-0));
// 	printf("ft_itoa7:%s\n-------\n", ft_itoa(-0));
// }
