/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:55:27 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:55:28 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rrb(t_frame *frame)
{
	if (frame->b)
		frame->b = frame->b->prev;
	if (frame->do_write)
		write(1, "rrb\n", 4);
}
