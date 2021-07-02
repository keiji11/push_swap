/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:58:36 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:58:36 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Pushes every number above or below median into Stack b, based on split flag
*/

void	push_median(t_frame *frame, int split)
{
	t_stack	*stack;
	t_stack	*stack_a_end;
	int		flag;

	stack = frame->a;
	stack_a_end = frame->a->prev;
	flag = 0;
	find_smallest(frame, 'a');
	while (1)
	{
		if (stack == stack_a_end)
			flag = 1;
		if (split == 1 && stack->num <= frame->median)
			do_pb(frame);
		else if (split == 2 && stack->num > frame->median)
			do_pb(frame);
		else if (stack->num == frame->smallest)
			break ;
		else
			do_ra(frame);
		if (flag == 1)
			break ;
		stack = frame->a;
	}
	reset_moves(frame);
}
