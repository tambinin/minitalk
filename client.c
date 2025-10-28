/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:06:11 by tambinin          #+#    #+#             */
/*   Updated: 2024/07/09 14:33:51 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <signal.h>
#include <stdio.h>
#include "./libft/libft.h"

void	send_signal(int pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (c >> i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(200);
		i--;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	i = 0;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		if (pid < 0)
			return (ft_putstr_fd("Please verify the PID\n", 1), 0);
		while (av[2][i])
		{
			send_signal(pid, av[2][i]);
			i++;
		}
		send_signal(pid, '\0');
	}
	return (0);
}
