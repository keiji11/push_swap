/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_quarters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:09:08 by marvin            #+#    #+#             */
/*   Updated: 2021/06/29 16:09:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Pushes every number above or below quarters into Stack b,
** based on split flag
*/

static void	push_first_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > QUARTER / 2)
		do_rb(frame);
	do_pb(frame);
}

static void	push_second_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > (MEDIAN / 4) * 3)
		do_rb(frame);
	do_pb(frame);
}

static void	push_third_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > (MEDIAN / 4) * 5)
		do_rb(frame);
	do_pb(frame);
}

static void	push_fourth_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > (MEDIAN / 4) * 7)
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
		if (stack_a == stack_a_end)
			flag = 1;
		if (split == 1 && stack_a->num <= QUARTER)
			push_first_quarter(frame);
		else if (split == 2 && stack_a->num > QUARTER && stack_a->num <= MEDIAN)
			push_second_quarter(frame);
		else if (split == 3 && stack_a->num > MEDIAN && stack_a->num <= THREE_Q)
			push_third_quarter(frame);
		else if (split == 4 && stack_a->num > THREE_Q)
			push_fourth_quarter(frame);
		else if (split == 4 && stack_a->num == SMALLEST)
			break ;
		else
			do_ra(frame);
		stack_a = frame->a;
	}
	reset_moves(frame);
}
