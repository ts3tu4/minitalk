/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_sixteen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:33:24 by mnanke            #+#    #+#             */
/*   Updated: 2023/03/06 14:22:14 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr_sixteen(unsigned long int ap, int dest)
{
	unsigned int	tmp;
	int				output;

	tmp = ap % 16;
	ap = ap / 16;
	output = 0;
	if (0 < ap)
		output += ft_putnbr_sixteen(ap, dest);
	if (tmp <= 9)
		output += ft_putchar((char)tmp + '0');
	else if (tmp > 9 && dest == '0')
		output += ft_putchar('a' + (char)tmp - 10);
	else if (tmp > 9 && dest == '1')
		output += ft_putchar('A' + (char)tmp - 10);
	return (output);
}
