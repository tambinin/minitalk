/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:02:30 by tambinin          #+#    #+#             */
/*   Updated: 2024/07/09 15:56:18 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		cmp;
	size_t	i;

	i = 0;
	while (i < n)
	{
		cmp = *(const unsigned char *)s1++ - *(const unsigned char *)s2++;
		if (cmp)
			return (cmp);
		i++;
	}
	return (0);
}

