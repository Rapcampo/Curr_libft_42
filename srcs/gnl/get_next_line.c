/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:34:43 by rapcampo          #+#    #+#             */
/*   Updated: 2023/11/03 12:34:47 by rapcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	ssize_t		len;

	line = NULL;
	len = 1;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	if (!buffer[0])
		len = read(fd, buffer, BUFFER_SIZE);
	while (len > 0)
	{
		line = ft_strjoin(line, buffer);
		if (ft_strchr(line, '\n'))
			break ;
		len = read(fd, buffer, BUFFER_SIZE);
	}
	if (len < 0)
	{
		if (line)
			free(line);
		return (NULL);
	}
	return (line);
}

int	main(void)
{
	auto char	*path = "example.txt";
	auto int	 fd = open(path, O_RDONLY);
	char	*line;

	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	
	line = get_next_line(fd);
	printf("%s", line);
	free(line);

	line = get_next_line(fd);
	printf("%s", line);
	free(line);

	line = get_next_line(fd);
	printf("%s", line);
	free(line);

	close(fd);
	return (0);
}
