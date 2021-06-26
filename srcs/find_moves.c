/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keiji-pop <keiji-pop@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:40:01 by keiji-pop         #+#    #+#             */
/*   Updated: 2021/06/26 18:57:58 by keiji-pop        ###   ########.fr       */
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

	ternary_stack_frame_a_b(stack_name, frame, 'a');
	if (stack)
	{
		ternary_stack_frame_a_b(stack_name, frame, 'a');
		if (flag == 1)
			element = SMALLEST;
		else
			element = BIGGEST;
		while (tmp->num != element)
		{
			if (flag == 1)
				SMALL_ROTATE++;
			else
				BIG_ROTATE++;
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

	ternary_stack_frame_a_b(stack_name, frame, 'a');
	if (stack)
	{
		if (stack_name == 'a')
			tmp = frame->a->prev;
		else
			tmp = frame->b->prev;
		if (flag == 1)
			element = SMALLEST;
		else
			element = BIGGEST;
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

	ternary_stack_frame_a_b(stack_name, frame, 'a');
	flag = 1;
	if (stack)
	{
		moves_to_start(frame, stack_name, flag);
		moves_to_end(frame, stack_name, flag);
		if (SMALL_ROTATE <= SMALL_RROTATE)
			SMALL_RROTATE = -1;
		else
			SMALL_ROTATE = -1;
	}
}

static void	moves_biggest(t_frame *frame, char stack_name)
{
	t_stack	*stack;
	int		flag;

	ternary_stack_frame_a_b(stack_name, frame, 'a');
	flag = 2;
	if (stack)
	{
		moves_to_start(frame, stack_name, flag);
		moves_to_end(frame, stack_name, flag);
		if (BIG_ROTATE <= BIG_RROTATE)
			BIG_RROTATE = -1;
		else
			BIG_ROTATE = -1;
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

	ternary_stack_frame_a_b(stack_name, frame, 'a');
	moves_smallest(frame, 'b');
	moves_biggest(frame, 'b');
	if (BIG_ROTATE != -1 && (BIG_ROTATE >= SMALL_ROTATE
			&& BIG_ROTATE >= SMALL_RROTATE))
		BIG_ROTATE = -1;
	else if (BIG_RROTATE != -1 && (BIG_RROTATE >= SMALL_ROTATE
			&& BIG_RROTATE >= SMALL_RROTATE))
		BIG_RROTATE = -1;
	else if (SMALL_ROTATE != -1 && (SMALL_ROTATE >= BIG_ROTATE
			&& SMALL_ROTATE >= BIG_RROTATE))
		SMALL_ROTATE = -1;
	else if (SMALL_RROTATE != -1 && (SMALL_RROTATE >= BIG_ROTATE
			&& SMALL_RROTATE >= BIG_RROTATE))
		SMALL_RROTATE = -1;
	if (SMALL_ROTATE != -1 || SMALL_RROTATE != -1)
		SMALL_FLAG = 1;
	else if (BIG_ROTATE != -1 || BIG_RROTATE != -1)
		BIG_FLAG = 1;
}
