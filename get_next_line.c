/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 22:23:45 by dlee              #+#    #+#             */
/*   Updated: 2016/12/12 17:47:26 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#define BUFF_SIZE 4

//static char *buffer;

int			get_next_line(const int fd, char **line)
{
	static char *buffer;
	char	buf[BUFF_SIZE];
	int		ret;
	int		i;
	char	*nl;

	free(buffer);
	*line = buffer;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if ((nl = ft_strchr(buf, '\n')) != NULL)
		{
			ft_putstr(nl);
			*(--nl) = '\0';
			buffer = ft_strjoin(buffer, buf);
			ft_putstr(buffer);
			return (1);
		}
		buffer = ft_strjoin(buffer,buf);
	}
	return (0);
}
