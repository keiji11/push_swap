/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:38:32 by marvin            #+#    #+#             */
/*   Updated: 2021/06/29 16:38:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_test(t_frame *frame)
{
	t_stack		*stack_a;
	int			error;

	stack_a = frame->a;
	error = (frame->b) ? 1 : 0;
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
