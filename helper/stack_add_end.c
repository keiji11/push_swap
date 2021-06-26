/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keiji-pop <keiji-pop@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:06:44 by keiji-pop         #+#    #+#             */
/*   Updated: 2021/06/26 18:18:33 by keiji-pop        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	no_stack_add_end(t_stack **top, t_frame *frame, int num)
{
	*top = (t_stack *)malloc(sizeof(t_stack));
	if (!(*top))
		push_swap_error(frame);
	(*top)->next = *top;
	(*top)->prev = *top;
	(*top)->num = num;
}

void	stack_add_end(t_frame *frame, char stack_name, int num)
{
	t_stack		**top;
	t_stack		*tmp;

	if (stack_name == 'a')
		top = &frame->a;
	else
		top = &frame->b;
	if (*top)
	{
		tmp = (t_stack *)malloc(sizeof(t_stack));
		if (!tmp)
			push_swap_error(frame);
		tmp->next = *top;
		tmp->prev = (*top)->prev;
		(*top)->prev = tmp;
		tmp->prev->next = tmp;
		tmp->num = num;
	}
	else
		no_stack_add_end(*top, frame, num);
}
