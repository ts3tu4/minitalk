/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:52:36 by mnanke            #+#    #+#             */
/*   Updated: 2024/04/27 21:29:26 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

volatile sig_atomic_t g_acknowledgement = true;

void	handle_acknowledgement(int sig)
{
	if (sig == SIGUSR1)
	{
		g_acknowledgement = true;
	}
}

void	ft_error(int style)
{
	if (style == INPUT_ERROR)
		ft_printf("'./client [PID] [string]'");
	if (style == PID_ERROR)
		ft_printf("PID is wrong, Please check again PID!");
	if (style == KILL_ERROR)
		ft_printf("Kill command error");
	exit(EXIT_FAILURE);
}

void	send_signal(int s_pid, char c)
{
	int	sig;
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (c >> i & 1)
			sig = SIGUSR1;
		else
			sig = SIGUSR2;
		while (!g_acknowledgement)
			usleep(1);
		if (kill(s_pid, sig) == -1)
			ft_error(KILL_ERROR);
		g_acknowledgement = false;
		i--;
	}
}

int	check_input_pid(char *c_pid)
{
	int	len;
	int	i_pid;
	int	i;

	len = ft_strlen(c_pid);
	i = 0;
	while (i < len)
	{
		if (!ft_isdigit(c_pid[i]))
			ft_error(PID_ERROR);
		i++;
	}
	i_pid = ft_atoi(c_pid);
	if (i_pid <= 1)
		ft_error(PID_ERROR);
	return (i_pid);
}

int	main(int argc, char **argv)
{
	size_t	i;
	size_t	len;
	int		i_pid;

	if (argc != 3)
		ft_error(INPUT_ERROR);
	i_pid = check_input_pid(argv[1]);
	signal(SIGUSR1, handle_acknowledgement);
	i = 0;
	len = ft_strlen(argv[2]);
	while (i < len)
	{
		send_signal(i_pid, argv[2][i]);
		i++;
	}
	return (0);
}
