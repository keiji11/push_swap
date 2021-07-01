/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:48:44 by marvin            #+#    #+#             */
/*   Updated: 2021/06/29 12:48:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "ft_printf.h"
#include "libft.h"

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

static void	free_strings(char *a, char *b)
{
	free(a);
	free(b);
}

static void	display_printf(t_frame *frame, int a_flag, int b_flag)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		*a;
	char		*b;

	stack_a = frame->a;
	stack_b = frame->b;
	if_stack_a_b(a_flag, b_flag);
	while (1)
	{
		if_flag_a(a_flag, stack_a, *a);
		if_flag_b(b_flag, stack_b, *b);
		if_stack_a_2(frame, a_flag, a);
		if_stack_a_2(frame, b_flag, b);
		not_stack(stack_a, stack_b, a, b);
		if ((!stack_a && !stack_b))
			break ;
		write(1, &a, 16);
		write(1, "\n", 1);
		write(1, &b, 16);
		write(1, "\n", 1);
		// ft_printf("%15s | %-15s\n", a, b);
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
		write(1, "Stack A\n", 8);
		write(1, "Stack B\n", 8);
		// ft_printf("\E[H\E[2J");
		// ft_printf("%15s   %-15s\n", "Stack A", "Stack B");
		display_printf(frame, 0, 0);
	}
}