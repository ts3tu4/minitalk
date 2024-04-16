/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:52:31 by mnanke            #+#    #+#             */
/*   Updated: 2024/04/16 14:43:07 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

volatile sig_atomic_t	g_sig;

void	outputipa(void)
{
	static int	i;
	static int	c;

	if (g_sig == SIGUSR1)
		c = (c << 1) + 1;
	else
		c = (c << 1) + 0;
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
	ft_printf("PID: %d", getpid());
	if (signal(SIGUSR1, signal_handler) == SIG_ERR)
		exit(EXIT_FAILURE);
	if (signal(SIGUSR2, signal_handler) == SIG_ERR)
		exit(EXIT_FAILURE);
	while (1)
	{
		pause();
		outputipa();
	}
	return (0);
}
