/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:31:22 by tambinin          #+#    #+#             */
/*   Updated: 2024/07/03 17:16:59 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "./libft/libft.h"
#include <stdio.h>

void	get_signal(int signal)
{
	static char	n;
	static int	i;
	static char	*str;

	if (signal == SIGUSR2)
		n = n << 1;
	else if (signal == SIGUSR1)
		n = (n << 1) | 1;
	if (++i == 8)
	{
		if (!str || str == NULL)
			str = ft_strdup("");
		if (n != '\0')
			str = ft_strjoin(str, &n);
		else
		{
			ft_putendl_fd(str, 1);
			free(str);
			str = NULL;
		}
		n = 0;
		i = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_putstr_fd("Le pid est : [", 1);
	ft_putnbr_fd(pid, 1);
	ft_putstr_fd("]\n", 1);
	while (1)
	{
		signal(SIGUSR1, get_signal);
		signal(SIGUSR2, get_signal);
	}
	return (0);
}
