/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:53:27 by llucente          #+#    #+#             */
/*   Updated: 2021/07/18 17:24:38 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_stack_flag(int flag)
{
	t_stack	*stack;

	stack = NULL;
	if (!stack)
		flag = 1;
	return (flag);
}

char	*if_flag(int flag, t_stack *stack)
{
	char	*str;

	if (!flag)
		str = ft_itoa(stack->num);
	else
		str = ft_strdup("");
	return (str);
}

int	if_stack_2_a(t_frame *frame, t_stack *stack)
{
	int	flag;

	if (!stack || stack == frame->a->prev)
		flag = 1;
	return (flag);
}

int	if_stack_2_b(t_frame *frame, t_stack *stack)
{
	int	flag;

	if (!stack || stack == frame->b->prev)
		flag = 1;
	return (flag);
}
