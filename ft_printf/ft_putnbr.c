/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:41:39 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/26 13:41:39 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr(int n)
{
	long long	num;
	int			output;

	num = n;
	output = 0;
	if (num < 0)
	{
		output += ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		output += ft_putnbr(num / 10);
		output += ft_putnbr(num % 10);
	}
	else
		output += ft_putchar(num + '0');
	return (output);
}
