/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:40:42 by tambinin          #+#    #+#             */
/*   Updated: 2024/07/09 15:57:11 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

int	check_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (check_set(s1[i], set) && i <= j)
		i++;
	while (check_set(s1[j], set) && j >= i)
		j--;
	if (ft_strlen(s1) <= i)
		return (ft_strdup(""));
	len = j - i + 1;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, len + 1);
	return (str);
}
