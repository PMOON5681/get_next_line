/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:24:54 by tjiranar          #+#    #+#             */
/*   Updated: 2024/10/25 00:13:39 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *ptr, int value, size_t len);

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if (count != 0 && size > INT_MAX / count)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, count * size);
	return ((void *)tmp);
}

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*temp;

	if (!ptr)
		return (NULL);
	temp = (unsigned char *)ptr;
	while (len--)
		*(temp++) = (unsigned char)value;
	return (ptr);
}