/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_5_or_less.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:59:10 by llucente          #+#    #+#             */
/*   Updated: 2021/07/20 10:38:32 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	solve_2(t_frame *frame)
{
	if (frame->a->num > frame->a->next->num)
		do_sa(frame);
}

static void	solve_3(t_frame *frame)
{
	t_stack	*stack_a;
	t_stack	*tmp;

	find_biggest(frame, 'a');
	moves_to_end(frame, 'a', 2);
	if (frame->big_rrotate >= 1)
		while (frame->big_rrotate-- > 1)
			do_rra(frame);
	stack_a = frame->a;
	tmp = frame->a->next;
	if (stack_a->num > tmp->num)
		do_sa(frame);
}

static void	solve_4(t_frame *frame)
{
	t_stack	*stack_a;

	stack_a = frame->a;
	find_biggest_smallest(frame, 'a');
	while (stack_a->num != frame->smallest)
	{
		do_ra(frame);
		stack_a = stack_a->next;
	}
	do_pb(frame);
	solve_3(frame);
	do_pa(frame);
}

static void	solve_5(t_frame *frame)
{
	t_stack	*stack_a_end;
	t_stack	*tmp;
	int		flag;

	flag = 0;
	stack_a_end = frame->a->prev;
	median(frame, 'a');
	while (flag != 1)
	{
		if (frame->a == stack_a_end)
			flag = 1;
		if (frame->a->num < frame->med)
			do_pb(frame);
		else
			do_ra(frame);
	}
	solve_3(frame);
	tmp = frame->b->next;
	if (frame->b->num < tmp->num)
		do_sb(frame);
	do_pa(frame);
	do_pa(frame);
}

void	solve_5_or_less(t_frame *frame)
{
	if (find_stack_len(frame, 'a') == 2)
		solve_2(frame);
	else if (find_stack_len(frame, 'a') == 3)
		solve_3(frame);
	else if (find_stack_len(frame, 'a') == 4)
		solve_4(frame);
	else if (find_stack_len(frame, 'a') <= 5)
		solve_5(frame);
}
