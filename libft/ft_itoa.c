/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:29:55 by tambinin          #+#    #+#             */
/*   Updated: 2024/03/07 17:06:09 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digit(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	size_t	i;

	len = count_digit(n);
	i = len - 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc(sizeof(char), (len + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (str);
}
