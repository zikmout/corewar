/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_octet.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 09:59:27 by djoly             #+#    #+#             */
/*   Updated: 2016/04/28 11:52:36 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "corewar.h"
#include "includes/reverse_octet.h"

char *r2oc(char *val)
{
	char	tmp;

	tmp = val[0];
	val[0] = val[1];
	val[1] = tmp;
	return (val);
}

char *r4oc(char *val)
{
	char	tmp;

	tmp = val[0];
	val[0] = val[3];
	val[3] = tmp;
	tmp = val[2];
	val[2] = val[1];
	val[1] = tmp;
	return (val);
}

union u_2o *r2o(union u_2o *val)
{
	char	tmp;

	tmp = val->c[0];
	val->c[0] = val->c[1];
	val->c[1] = tmp;
	return (val);
}

union u_4o *r4o(union u_4o *val)
{
	char	tmp;

	tmp = val->c[0];
	val->c[0] = val->c[3];
	val->c[3] = tmp;
	tmp = val->c[2];
	val->c[2] = val->c[1];
	val->c[1] = tmp;
	return (val);
}