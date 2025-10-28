/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:18:03 by tambinin          #+#    #+#             */
/*   Updated: 2024/07/08 15:02:45 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	l1;
	size_t	l2;
	char	*str;
	size_t	i;
	size_t	j;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		str[i] = s1[i];
		i++;
	}
	free(s1);
	j = 0;
	while (j < l2)
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
