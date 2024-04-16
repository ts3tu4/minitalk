/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:52:36 by mnanke            #+#    #+#             */
/*   Updated: 2024/04/16 15:40:48 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_error(int style)
{
	if (style == INPUT_ERROR)
		ft_printf("'./client [PID] [string]'");
	if (style == PID_ERROR)
		ft_printf("PID is worng, Please check again PID");
	exit(EXIT_FAILURE);
}

int	main(int argc, char **argv)
{
	int	s_pid;

	if (argc != 3)
		ft_error(INPUT_ERROR);
	s_pid = atoi(*argv);
	if (s_pid <= 1)
		ft_error(PID_ERROR);
	
}
