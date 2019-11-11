/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamooja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:25:26 by osamooja          #+#    #+#             */
/*   Updated: 2019/10/30 12:11:35 by osamooja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>
#include "get_next_line.h"

int		main(int ac, char *av[])
{
	char 	*line;
	int		fd;
	int		x;

	line = NULL;
	x = 1;
	if (ac == 1)
	{
		fd = open(0, O_RDONLY);
		while (get_next_line(0, &line) > 0)
		{
			ft_putstr(line);
			ft_putchar('\n');
			ft_memdel((void **)&line);
		}
		ft_memdel((void **)&line);
	}
	else
	{
		while (av[x])
		{
			fd = open(av[x], O_RDONLY);
			while (get_next_line(fd, &line)> 0)
			{
				ft_putstr(line);
				ft_putchar('\n');
				ft_memdel((void **)&line);
			}
			ft_memdel((void **)&line);
			x++;
		}
	}
	return (0);
}
