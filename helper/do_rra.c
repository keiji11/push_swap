/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keiji-pop <keiji-pop@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:59:58 by keiji-pop         #+#    #+#             */
/*   Updated: 2021/06/26 19:00:08 by keiji-pop        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rra(t_frame *frame)
{
	if (frame->a)
		frame->a = frame->a->prev;
	if (frame->do_write)
		write(1, "rra\n", 4);
}
