/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:57:04 by llucente          #+#    #+#             */
/*   Updated: 2021/07/23 16:40:53 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	equal_stack(t_stack *stack_a, t_stack *stack_a_end)
{
	int	flag;

	flag = 0;
	if (stack_a == stack_a_end)
		flag = 1;
	return (flag);
}
