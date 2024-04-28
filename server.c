/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:52:31 by mnanke            #+#    #+#             */
/*   Updated: 2024/04/27 20:41:03 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_global	g_state;

void	output_char(void)
{
	char	temp_char;

	if (g_state.bit_position == 8)
	{
		temp_char = g_state.current_char;
		write(1, &temp_char, 1);
		g_state.bit_position = 0;
		g_state.current_char = 0;
	}
}

void	signal_handler(int signum, siginfo_t *info, void *context)
{
	(void)context;
	g_state.client_pid = info->si_pid;
	if (signum == SIGUSR1)
		g_state.current_char |= (1 << (7 - g_state.bit_position));
	g_state.bit_position++;
	if (g_state.bit_position == 8)
		output_char();
	if (g_state.client_pid != 0)
		kill(g_state.client_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = signal_handler;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	ft_printf("PID: %d\n", getpid());
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		exit(EXIT_FAILURE);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		exit(EXIT_FAILURE);
	while (1)
		pause();
	return (0);
}
