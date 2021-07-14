/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:58:51 by llucente          #+#    #+#             */
/*   Updated: 2021/07/14 18:04:54 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Frame A is filled with the stack A numbers.
** Turns on the do_write flag, which prints moves to the standard output.
** If stack A is not sorted, the solver function is called.
*/

void	push_swap(t_frame *frame)
{
	fill_stack_a(frame);
	frame->do_write = 1;
	if (!sorted(frame))
	{
		solver(frame);
		return ;
	}
}

/*
** Main creates frame to hold stack A and stack B by calling create_frame.
*/

int	main(int argc, char **argv)
{
	t_frame		*frame;

	frame = NULL;
	if (argc < 2)
		return (1);
	frame = create_frame(frame, argv);
	push_swap(frame);
	push_swap_free(frame);
	return (0);
}