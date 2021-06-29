/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest_smallest.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keiji-pop <keiji-pop@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:35:04 by keiji-pop         #+#    #+#             */
/*   Updated: 2021/06/26 18:37:34 by keiji-pop        ###   ########.fr       */
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
	SMALLEST = BIGGEST;
	while (1)
	{
		if (tmp->num <= SMALLEST)
			SMALLEST = tmp->num;
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
	BIGGEST = tmp->num;
	if (stack_name == 'a')
		end = frame->a->prev;
	else
		end = frame->b->prev;
	while (1)
	{
		if (tmp->num > BIGGEST)
			BIGGEST = tmp->num;
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