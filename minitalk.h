/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:10:05 by mnanke            #+#    #+#             */
/*   Updated: 2024/04/27 17:54:43 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct s_global
{
	volatile int	client_pid;
	volatile int	bit_position;
	volatile int	current_char;
}	t_global;

# define INPUT_ERROR 1
# define PID_ERROR 2
# define KILL_ERROR 3 
# define RESPONSE_ERROR 4
#endif