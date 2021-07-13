/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:57:04 by llucente          #+#    #+#             */
/*   Updated: 2021/07/13 19:02:48 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	equal_stack(t_stack *stack_a, t_stack *stack_a_end, int flag)
{
	if (stack_a == stack_a_end && !flag)
		flag = 1;
}

void	switching(t_frame *frame, t_stack *stack_a, int split)
{
	while (1)
	{
		if (split == 1 && stack_a->num <= frame->quarter)
			push_first_quarter(frame);
		else if (split == 2 && stack_a->num > frame->quarter
			&& stack_a->num <= frame->median)
			push_second_quarter(frame);
		else if (split == 3 && stack_a->num > frame->median
			&& stack_a->num <= frame->three_quarters)
			push_third_quarter(frame);
		else if (split == 4 && stack_a->num > frame->three_quarters)
			push_fourth_quarter(frame);
		else if (split == 4 && stack_a->num == frame->smallest)
			break ;
		else
			do_ra(frame);
	}
}
