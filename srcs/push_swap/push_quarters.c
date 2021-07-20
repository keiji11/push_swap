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

void	push_first_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > frame->qu / 2)
		do_rb(frame);
	do_pb(frame);
}

void	push_second_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > (frame->med / 4) * 3)
		do_rb(frame);
	do_pb(frame);
}

void	push_third_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > (frame->med / 4) * 5)
		do_rb(frame);
	do_pb(frame);
}

void	push_fourth_quarter(t_frame *frame)
{
	if (frame->b && frame->b->num > (frame->med / 4) * 7)
		do_rb(frame);
	do_pb(frame);
}

void	push_quarters(t_frame *frame, t_stack *st_a, int split)
{
	t_stack	*stack_a_end;
	int		flag;

	stack_a_end = frame->a->prev;
	flag = 0;
	find_biggest_smallest(frame, 'a');
	while (flag != 1)
	{
		flag = equal_stack(st_a, stack_a_end);
		if (split == 1 && st_a->num <= frame->qu)
			push_first_quarter(frame);
		else if (split == 2 && st_a->num > frame->qu && st_a->num <= frame->med)
			push_second_quarter(frame);
		else if (split == 3 && st_a->num > frame->med
			&& st_a->num <= frame->three_qu)
			push_third_quarter(frame);
		else if (split == 4 && st_a->num > frame->three_qu)
			push_fourth_quarter(frame);
		else if (split == 4 && st_a->num == frame->smallest)
			break ;
		else
			do_ra(frame);
		st_a = frame->a;
	}
	reset_moves(frame);
}
