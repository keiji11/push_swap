/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:59:16 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:59:17 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solver(t_frame *frame)
{
	if (!(sorted(frame)))
	{
		if (find_stack_len(frame, 'a') <= 5)
			solve_5_or_less(frame);
		else if (find_stack_len(frame, 'a') <= 100)
			insertion_solve_half(frame);
		else
			insertion_solve_quarters(frame);
	}
}
