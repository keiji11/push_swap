/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_quarters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:58:42 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:58:42 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Pushes every number above or below quarters into Stack b,
** based on split flag
*/

static void	push_first_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > frame->quarter / 2)
		do_rb(frame);
	do_pb(frame);
}

static void	push_second_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > (frame->median / 4) * 3)
		do_rb(frame);
	do_pb(frame);
}

static void	push_third_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > (frame->median / 4) * 5)
		do_rb(frame);
	do_pb(frame);
}

static void	push_fourth_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > (frame->median / 4) * 7)
		do_rb(frame);
	do_pb(frame);
}

void	push_quarters(t_frame *frame, t_stack *stack_a, int split)
{
	t_stack	*stack_a_end;
	int		flag;

	stack_a_end = frame->a->prev;
	flag = 0;
	find_biggest_smallest(frame, 'a');
	while (flag != 1)
	{
		equal_stack(stack_a, stack_a_end, flag);
		switching(frame, stack_a, split);
		stack_a = frame->a;
	}
	reset_moves(frame);
}
