/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:56:07 by tambinin          #+#    #+#             */
/*   Updated: 2024/07/09 15:56:57 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	int				j;
	char			*b;

	b = (char *)big;
	i = 0;
	j = 0;
	if (little[j] == '\0')
		return (b);
	while (b[i] && i < len)
	{
		j = 0;
		while (b[i + j] == little[j] && little[j] && (i + j < len))
			j++;
		if (little[j] == '\0')
			return (b + i);
		i++;
	}
	return (0);
}
