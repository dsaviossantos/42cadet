/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 00:02:59 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/28 11:04:50 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//Line or EOF Verification returner
//Read and Join str
//GNL aggregator

char	*validate_line(char *line)
{
	
}

char	*get_next_line(int fd)
{
	static char	*full_file;
	char		*buffer;
	char		*line;

	full_file = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= MAX_FD)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (read(fd, buffer, 0) < 0)
	{
		free(buffer);
		return (NULL);
	}

	size_t		read_len;
	size_t		i;
	int			isfinished;
	read_len = read(fd,buffer,BUFFER_SIZE);
	isfinished = 0;
	while (buffer[i] != '/n' || buffer[i] != NULL || i <= read_len)
	{
		i++;
	}
	if (i != read_len || read_len == 0)
	{
		isfinished = 1;
	}
	full_file = ft_strjoin(full_file, buffer);
	
}
int	compose_line(char *full_line, char *buffer)
{
	char	**temp;
	while (!ft_strchr(buffer, '/n'))
	{
		full_line = ft_strjoin(full_line, buffer);
	}
	temp = ft_split(buffer,'/n');
	full_line = ft_strjoin(full_line, temp[0]);
	free(temp);
	return (1);
}