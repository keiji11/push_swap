/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:52:42 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:52:42 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Checker is launched by the main.
** fill_stack_a is called to fill stack A with argv.
** do_launch gets command line arguments and executes the commands.
** sort_test tests for if stack A is sorted or not following Push_Swap.
*/

void	checker(t_frame *frame)
{
	fill_stack_a(frame);
	do_launch(frame);
	sort_test(frame);
	push_swap_free(frame);
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
	checker(frame);
	return (0);
}
