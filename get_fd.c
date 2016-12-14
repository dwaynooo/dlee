/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:58:53 by dlee              #+#    #+#             */
/*   Updated: 2016/12/12 17:25:17 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#define BUFF_SIZE 32
#include <stdio.h>

int		get_next_line(const int fd, char **line);

int		main(int ac, char **av)
{
	int		fd;
	char	buf[BUFF_SIZE + 1];
	int		ret;
	char	*line;

	(void) ac;
	fd = open(av[1], 'r');
	printf("%d//%s\n", get_next_line(fd, &line), line);
	close(fd);
	return (0);
}
