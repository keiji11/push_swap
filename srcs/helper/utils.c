/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:14:30 by llucente          #+#    #+#             */
/*   Updated: 2021/06/30 13:02:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isneg(char c)
{
	if (c == "-")
		return (-1);
	else
		return (0);
}

void	ft_goto_pushswap_error(int len, t_frame *frame)
{
	if (len > 10)
		push_swap_error(frame);
	else
		return ;
}

void	ter_stack_frm_a_b(char stack_name, t_frame *frame, char ch)
{
	t_stack	*stack;

	if (stack_name == ch)
		stack = frame->a;
	else
		stack = frame->b;
}

void	ter_flag_rrotate(int flag, t_frame *frame)
{
	if (flag == 1)
		SMALL_RROTATE++;
	else
		BIG_RROTATE++;
}