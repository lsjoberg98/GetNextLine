/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsjoberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:23:24 by lsjoberg          #+#    #+#             */
/*   Updated: 2019/10/17 12:27:04 by lsjoberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*string;

	if (!(string = ft_memalloc(size + 1)))
		return (NULL);
	i = 0;
	while (i < size)
		string[i++] = '\0';
	return (string);
}
