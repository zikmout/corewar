/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_live.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 12:37:24 by tmanet            #+#    #+#             */
/*   Updated: 2016/05/25 18:30:36 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/corewar.h"

static void	ft_live_plr(t_vm *vm, int live)
{
	t_list_player	*plr;
	int				tmp;

	plr = vm->bplr.lst_plyr;
	while (plr && plr->plr->num_plyr != live)
		plr = plr->next;
	if (plr)
	{
		plr->plr->last_live = vm->cpu.cur_cycle;
		plr->plr->nbr_live++;
		if (vm->verbose & 1)
		{
			if (live < 0)
				tmp = (-1 * live);
			else
				tmp = live;
			ft_printf("Player %d (%s) is said to be alive\n",
					tmp, plr->plr->prog_name);
		}
	}
}

void		ft_live(t_vm *vm, t_process *proc)
{
	int				arg[3];

	arg[0] = proc->ir.args[0];
	if (vm->verbose & 4)
	{
		ft_print_operations(proc, arg);
		ft_putchar('\n');
	}
	ft_live_plr(vm, proc->ir.args[0]);
	proc->lst_live = vm->cpu.cur_cycle;
	proc->live++;
	vm->nbr_live++;
}
