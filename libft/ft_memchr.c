/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:15:09 by tambinin          #+#    #+#             */
/*   Updated: 2024/07/09 16:00:05 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

