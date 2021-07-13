/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:57:34 by llucente          #+#    #+#             */
/*   Updated: 2021/07/13 19:22:36 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Calculates number of moves to top of stack
*/

void	moves_to_start(t_frame *frame, char stack_name, int flag)
{
	t_stack	*stack;
	t_stack	*tmp;
	int		element;

	stack = ter_stack_frm_a_b(stack_name, frame, 'a');
	if (stack)
	{
		stack = ter_stack_frm_a_b(stack_name, frame, 'a');
		if (flag == 1)
			element = frame->smallest;
		else
			element = frame->biggest;
		while (tmp->num != element)
		{
			if (flag == 1)
				frame->small_rotate++;
			else
				frame->big_rotate++;
			tmp = tmp->next;
		}
	}
}

/*
** Calculates moves to bottom of stack
*/

void	moves_to_end(t_frame *frame, char stack_name, int flag)
{
	t_stack	*stack;
	t_stack	*tmp;
	int		element;

	stack = ter_stack_frm_a_b(stack_name, frame, 'a');
	if (stack)
	{
		if (stack_name == 'a')
			tmp = frame->a->prev;
		else
			tmp = frame->b->prev;
		if (flag == 1)
			element = frame->smallest;
		else
			element = frame->biggest;
		while (tmp->num != element)
		{
			ter_flag_rrotate(flag, frame);
			tmp = tmp->prev;
		}
		ter_flag_rrotate(flag, frame);
	}
}

static void	moves_smallest(t_frame *frame, char stack_name)
{
	t_stack	*stack;
	int		flag;

	stack = ter_stack_frm_a_b(stack_name, frame, 'a');
	flag = 1;
	if (stack)
	{
		moves_to_start(frame, stack_name, flag);
		moves_to_end(frame, stack_name, flag);
		if (frame->small_rotate <= frame->small_rrotate)
			frame->small_rrotate = -1;
		else
			frame->small_rotate = -1;
	}
}

static void	moves_biggest(t_frame *frame, char stack_name)
{
	t_stack	*stack;
	int		flag;

	stack = ter_stack_frm_a_b(stack_name, frame, 'a');
	flag = 2;
	if (stack)
	{
		moves_to_start(frame, stack_name, flag);
		moves_to_end(frame, stack_name, flag);
		if (frame->big_rotate <= frame->big_rrotate)
			frame->big_rrotate = -1;
		else
			frame->big_rotate = -1;
	}
}

/*
** Calculates which has fewest moves to push to stack a:
** the biggest or smallest integer in stack b,
** either by rotating to the top or reverse rotating to the end.
*/

void	find_moves(t_frame *frame, char stack_name)
{
	t_stack	*stack;

	stack = ter_stack_frm_a_b(stack_name, frame, 'a');
	if (stack || 1)
		moves_smallest(frame, 'b');
	moves_biggest(frame, 'b');
	if (frame->big_rotate != -1 && (frame->big_rotate >= frame->small_rotate
			&& frame->big_rotate >= frame->small_rrotate))
		frame->big_rotate = -1;
	else if (frame->big_rrotate != -1
		&& (frame->big_rrotate >= frame->small_rotate
			&& frame->big_rrotate >= frame->small_rrotate))
		frame->big_rrotate = -1;
	else if (frame->small_rotate != -1
		&& (frame->small_rotate >= frame->big_rotate
			&& frame->small_rotate >= frame->big_rrotate))
		frame->small_rotate = -1;
	else if (frame->small_rrotate != -1 
		&& (frame->small_rrotate >= frame->big_rotate
			&& frame->small_rrotate >= frame->big_rrotate))
		frame->small_rrotate = -1;
	if (frame->small_rotate != -1 || frame->small_rrotate != -1)
		frame->small_flag = 1;
	else if (frame->big_rotate != -1 || frame->big_rrotate != -1)
		frame->big_flag = 1;
}
