/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_solve_quarters.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:06:11 by marvin            #+#    #+#             */
/*   Updated: 2021/06/29 16:06:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Pushes biggest or smallest from stack B to stack A, in sorted order
*/

static void	rotate_and_push_to_a(t_frame *frame)
{
	if (frame->small_rotate >= 0)
		while (frame->small_rotate--)
			do_rb(frame);
	else if (frame->small_rrotate >= 0)
		while (frame->small_rrotate--)
			do_rrb(frame);
	else if (frame->big_rotate >= 0)
		while (frame->big_rotate--)
			do_rb(frame);
	else if (frame->big_rrotate >= 0)
		while (frame->big_rrotate--)
			do_rrb(frame);
	do_pa(frame);
	if (frame->small_flag)
		do_ra(frame);
	if (frame->big_flag || !frame->b)
		frame->after_rotate++;
	reset_moves(frame);
}

static void	push_big_small(t_frame *frame, t_stack *stack, t_stack *stack_end)
{
	while (1)
	{
		while (stack->num != frame->smallest && stack->num != frame->biggest)
			stack = stack->next;
		if (stack->num == frame->smallest || stack->num == frame->biggest)
		{
			rotate_and_push_to_a(frame);
			break ;
		}
		else
			stack = stack->next;
		if (stack == stack_end)
			break ;
		stack = frame->b;
	}
}

/*
** Divides stack A into quarters
** Pushes everything above/below quarters into stack B
** Identifies biggest + smallest
** Whichever one is fewer moves gets pushed to stack A
** Pushes smallest to the end of A
** Pushes biggest to the top of A
*/

void	insertion_solve_quarters(t_frame *frame)
{
	int	split;

	split = 1;
	median(frame, 'a');
	while (frame->a)
	{
		push_quarters(frame, frame->a, split);
		while (frame->b)
		{
			find_biggest_smallest(frame, 'b');
			find_moves(frame, 'b');
			if (frame->b && (frame->small_rotate >= 0
					|| frame->small_rrotate >= 0
					|| frame->big_rotate >= 0
					|| frame->big_rrotate >= 0))
				push_big_small(frame, frame->b, frame->b->prev);
		}
		while (--frame->after_rotate)
			do_ra(frame);
		split++;
		if (split == 5)
			break ;
	}
}
