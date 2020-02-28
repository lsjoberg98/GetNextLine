/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsjoberg <lsjoberg@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:52:46 by lsjoberg          #+#    #+#             */
/*   Updated: 2020/02/28 18:25:14 by lsjoberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
** Needed for malloc(), free() and write(). Also for typedef size_t and sizeof()
*/

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <limits.h>

/*
** Macro for the buffer size, the max number of file descriptors available, and
** to get the correct return value from the gnl_read_file() function.
** Find the max number of files:
** Mac: launchctl limit maxfiles
** Linux: ulimit -n
*/

# define BUFF_SIZE 1
# define MAX_FD 1024 + 1

/*
** Prototype for the get_next_line() function.
*/

int	get_next_line(int const fd, char **line);

#endif
