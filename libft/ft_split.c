/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:16:23 by tambinin          #+#    #+#             */
/*   Updated: 2024/07/09 15:56:45 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

static int	count_word(char	const *str, char c)
{
	size_t	count;

	count = 0;
	if (!*str)
		return (0);
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**tab;
	size_t	len_word;

	i = 0;
	tab = (char **)ft_calloc(sizeof(char *), (count_word(s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c))
				len_word = ft_strchr(s, c) - s;
			else
				len_word = ft_strlen(s);
			tab[i++] = ft_substr(s, 0, len_word);
			s += len_word;
		}
	}
	return (tab);
}

