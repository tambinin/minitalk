/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:56:05 by tambinin          #+#    #+#             */
/*   Updated: 2024/07/09 15:56:01 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	len;
	void	*ptr;

	len = nmemb * size;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}

