/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:19:17 by mnanke            #+#    #+#             */
/*   Updated: 2023/03/06 15:53:50 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	distr_af_pc(const char input, va_list *ap)
{
	if (input == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (input == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	else if (input == 'p')
		return (ft_putstr("0x")
			+ ft_putnbr_sixteen(va_arg(*ap, unsigned long int), '0'));
	else if (input == 'd' || input == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	else if (input == 'u')
		return (ft_putnbr_unsigned(va_arg(*ap, unsigned int)));
	else if (input == 'x')
		return (ft_putnbr_sixteen(va_arg(*ap, unsigned int), '0'));
	else if (input == 'X')
		return (ft_putnbr_sixteen(va_arg(*ap, unsigned int), '1'));
	else if (input == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *input, ...)
{
	va_list		ap;
	size_t		i;
	long long	output;

	va_start(ap, input);
	i = 0;
	output = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%')
			output += distr_af_pc(input[++i], &ap);
		else
			output += ft_putchar(input[i]);
		i++;
	}
	if (output == -1 || output > INT_MAX)
		return (-1);
	va_end(ap);
	return ((int)output);
}

// int	main(void)
// {
// 	char	putc;
// 	char	putp[1000];
// 	int		*nulp;

// 	nulp = NULL;
// 	putc = 'b';
// 	strcpy(putp, "asba");
// 	printf("printf(c):%c\n", putc);
// 	ft_printf("ft_printf(c):%c\n--------------\n", putc);
// 	printf("printf(s):%s\n", putp);
// 	ft_printf("ft_printf(s):%s\n--------------\n", putp);
// 	printf("printf(p):%p\n", putp);
// 	ft_printf("ft_printf(p):%p\n--------------\n", putp);
// 	printf("printf(p):%p\n", nulp);
// 	ft_printf("ft_printf(p):%p\n--------------\n", nulp);
// 	printf("printf(d):%d\n", INT_MIN);
// 	ft_printf("ft_printf(d):%d\n--------------\n", INT_MIN);
// 	printf("printf(i):%i\n", INT_MIN);
// 	ft_printf("ft_printf(i):%i\n--------------\n", INT_MIN);
// 	printf("printf(u):%u\n", UINT_MAX);
// 	ft_printf("ft_printf(u):%u\n--------------\n", UINT_MAX);
// 	printf("printf(x):%x\n", UINT_MAX);
// 	ft_printf("ft_printf(x):%x\n--------------\n", UINT_MAX);
// 	printf("printf(X):%X\n", UINT_MAX);
// 	ft_printf("ft_printf(X):%X\n--------------\n", UINT_MAX);
// 	printf("printf(pc):%%\n");
// 	ft_printf("ft_printf(pc):%%\n--------------\n");
// }
