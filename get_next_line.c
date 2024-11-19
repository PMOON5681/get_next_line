/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:24:56 by tjiranar          #+#    #+#             */
/*   Updated: 2024/10/25 00:35:54 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd);
static char	*read_file(int fd);

static char	*read_file(int fd)
{
	int		byte_read;
	char	*buffer;
	
	buffer = ft_calloc (BUFFER_SIZE + 1, sizeof(char));
	if (buffer == NULL)
		return (NULL);
	byte_read = read(fd, buffer, BUFFER_SIZE);
	if (byte_read <= 0)
	{
		free (buffer);
		return (NULL);
	}
	return (buffer);
}

char	*get_next_line(int fd)
{
	char	*cup_buffer;

	cup_buffer = read_file(fd);
	return (cup_buffer);
}
