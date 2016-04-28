/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_name.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 10:49:13 by tmanet            #+#    #+#             */
/*   Updated: 2016/04/28 12:02:03 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/asm.h"

void	ft_print_name(t_champ *chp, int fd)
{
	char	*zero;

	zero = "\0\0\0\0";
	write(fd, &chp->name, PROG_NAME_LENGTH);
	write(fd, zero, 4);
}
