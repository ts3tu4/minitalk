/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:52:31 by mnanke            #+#    #+#             */
/*   Updated: 2024/04/23 06:58:31 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

volatile sig_atomic_t	g_sig;

void	output_char(void)
{
	static int	i;
	static int	c;

	if (g_sig == SIGUSR1)
		c |= (1 << i);
	if (i == 7)
	{
		write(1, &c, 1);
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
		output_char();
	}
	return (0);
}
