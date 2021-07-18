/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:53:41 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:53:41 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static void	free_strings(char *a, char *b)
{
	free(a);
	free(b);
}

void	not_stack(t_stack *stack_a, t_stack *stack_b, char *a,
			char *b)
{
	if (!stack_a && !stack_b)
		free_strings(a, b);
}

void	check_stacks(t_frame *frame, t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a && stack_a != frame->a->prev)
		stack_a = stack_a->next;
	else
		stack_a = NULL;
	if (stack_b && stack_b != frame->b->prev)
		stack_b = stack_b->next;
	else
		stack_b = NULL;
}

static void	display_printf(t_frame *frame, int a_flag, int b_flag)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		*a;
	char		*b;

	stack_a = frame->a;
	stack_b = frame->b;
	a_flag = if_stack_flag(a_flag);
	b_flag = if_stack_flag(b_flag);
	while (1)
	{
		a = if_flag(a_flag, stack_a);
		b = if_flag(b_flag, stack_b);
		a_flag = if_stack_2_a(frame, stack_a);
		b_flag = if_stack_2_a(frame, stack_b);
		not_stack(stack_a, stack_b, a, b);
		if ((!stack_a && !stack_b))
			break ;
		write(1, &a, 16);
		write(1, "\n", 1);
		write(1, &b, 16);
		write(1, "\n", 1);
		free_strings(a, b);
		check_stacks(frame, stack_a, stack_b);
	}
}

/*
** If print_stacks flag is turned on, the stack is printed after every move.
** usleep(100000) -> this is a number of microseconds.
** "\E[H\E[2J" is an escape sequence to clear the screen.
*/

void	display_stacks(t_frame *frame)
{
	if (frame->print_stacks == 1)
	{
		usleep(100000);
		write(1, "\E[H\E[2J\n", 10);
		write(1, "Stack A\n", 16);
		write(1, "Stack B\n", 16);
		display_printf(frame, 0, 0);
	}
}
