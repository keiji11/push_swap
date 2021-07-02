/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest_smallest.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:57:15 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:57:16 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Finds the biggest and smallest integers in the stack that is called
*/

void	find_smallest(t_frame *frame, char stack_name)
{
	t_stack		*stack;
	t_stack		*tmp;
	t_stack		*end;

	if (stack_name == 'a')
		stack = frame->a;
	else
		stack = frame->b;
	tmp = stack;
	if (stack_name == 'a')
		end = frame->a->prev;
	else
		end = frame->b->prev;
	frame->smallest = frame->biggest;
	while (1)
	{
		if (tmp->num <= frame->smallest)
			frame->smallest = tmp->num;
		if (tmp == end)
			break ;
		tmp = tmp->next;
	}
}

void	find_biggest(t_frame *frame, char stack_name)
{
	t_stack		*stack;
	t_stack		*tmp;
	t_stack		*end;

	if (stack_name == 'a')
		stack = frame->a;
	else
		stack = frame->b;
	tmp = stack;
	frame->biggest = tmp->num;
	if (stack_name == 'a')
		end = frame->a->prev;
	else
		end = frame->b->prev;
	while (1)
	{
		if (tmp->num > frame->biggest)
			frame->biggest = tmp->num;
		if (tmp == end)
			break ;
		tmp = tmp->next;
	}
}

void	find_biggest_smallest(t_frame *frame, char stack_name)
{
	t_stack		*stack;

	if (stack_name == 'a')
		stack = frame->a;
	else
		stack = frame->b;
	find_biggest(frame, stack_name);
	find_smallest(frame, stack_name);
}
