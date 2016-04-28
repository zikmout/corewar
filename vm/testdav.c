/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testdav.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 10:18:48 by djoly             #+#    #+#             */
/*   Updated: 2016/04/28 15:30:03 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/reverse_octet.h"
#include <stdio.h>

int main()
{
	char core[] = "defg";
	union u_2o	v2;
	union u_4o	v4;


	v2.c[0] =	core[0];
	v2.c[1] =	core[1];

	v4.c[0] =	core[0];
	v4.c[1] =	core[1];
	v4.c[2] =	core[2];
	v4.c[3] =	core[3];
	printf("|%d|%d|\n", v2.i, v4.i);
	r2o(&v2);
	r4o(&v4);
	printf("|%d|%d|", v2.i, v4.i);

	return (0);
}
