/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:52:31 by mnanke            #+#    #+#             */
/*   Updated: 2024/04/18 19:50:54 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void printb(unsigned int v) 
{
  unsigned int mask = (int)1 << (sizeof(v) * CHAR_BIT - 1);
  do putchar(mask & v ? '1' : '0');
  while (mask >>= 1);
}

volatile sig_atomic_t	g_sig;

void	outputipa(void)
{
	static int	i;
	static int	c;

	if (g_sig == SIGUSR1)
	{
		c = (c << 1) + 1;
		printb(c);
	}
	else
	{
		c = (c << 1) + 0;
		printb(c);
	}
	if (i == 7)
	{
		// write(1, &c, 1);
		ft_printf("c:%d", c);
		i = 0;
		c = 0;
		return ;
	}
	i++;
}

void	signal_handler(int signum)
{
	g_sig = signum;
}

int	main(void)
{
	ft_printf("PID: %d\n", getpid());
	if (signal(SIGUSR1, signal_handler) == SIG_ERR)
		exit(EXIT_FAILURE);
	if (signal(SIGUSR2, signal_handler) == SIG_ERR)
		exit(EXIT_FAILURE);
	while (1)
	{
		pause();
		outputipa();
		ft_printf("while\n");
	}
	return (0);
}
