/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 10:18:34 by tmanet            #+#    #+#             */
/*   Updated: 2016/05/06 10:23:37 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

void	ft_aff(t_vm *vm, t_process *proc)
{
	ft_putchar(proc->reg[proc->ir.args[0] - 1] % 256);
}
