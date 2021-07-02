/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:52:59 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:52:59 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_test(t_frame *frame)
{
	t_stack		*stack_a;
	int			error;

	stack_a = frame->a;
	if (frame->b)
		error = 1;
	else
		error = 0;
	while (stack_a && stack_a->next != frame->a)
	{
		if (stack_a->num > stack_a->next->num)
			error = 1;
		stack_a = stack_a->next;
	}
	if (error)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
}
