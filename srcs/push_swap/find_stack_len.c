/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_stack_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:57:41 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:57:42 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_stack_len(t_frame *frame, char stack_name)
{
	t_stack	*stack;
	t_stack	*end;
	int		len;

	if (stack_name == 'a')
		stack = frame->a;
	else
		stack = frame->b;
	len = 0;
	if (stack)
	{
		if (stack_name == 'a')
			end = frame->a->prev;
		else
			end = frame->b->prev;
	}
	while (stack)
	{
		len++;
		if (stack == end)
			break ;
		stack = stack->next;
	}
	return (len);
}
