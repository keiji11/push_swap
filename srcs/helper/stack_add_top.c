/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:16:53 by marvin            #+#    #+#             */
/*   Updated: 2021/06/28 19:16:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	next_el_list(t_stack **top, t_stack *tmp, int num)
{
	tmp->next = *top;
	tmp->prev = (*top)->prev;
	(*top)->prev = tmp;
	tmp->prev->next = tmp;
	tmp->num = num;
	*top = (*top)->prev;
}

void	stack_add_top(t_frame *frame, char stack_name, int num)
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
		if (!(tmp))
			push_swap_error(frame);
		next_el_list(top, tmp, num);
	}
	else
	{
		*top = (t_stack *)malloc(sizeof(t_stack));
		if (!(*top))
			push_swap_error(frame);
		(*top)->next = *top;
		(*top)->prev = *top;
		(*top)->num = num;
	}
}
