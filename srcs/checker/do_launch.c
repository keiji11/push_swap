/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_launch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:52:51 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:52:51 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "get_next_line.h"
// #include "ft_printf.h"

static t_table	do_launch_value(int execute_value)
{
	t_table		table[47];
	int			i;

	i = 0;
	while (i < 47)
		table[i++] = &push_swap_error;
	table[11] = &do_sa;
	table[14] = &do_sb;
	table[17] = &do_ss;
	table[20] = &do_pa;
	table[23] = &do_pb;
	table[26] = &do_ra;
	table[29] = &do_rb;
	table[32] = &do_rr;
	table[35] = &do_rra;
	table[39] = &do_rrb;
	table[43] = &do_rrr;
	return (table[execute_value]);
}

void	do_launch(t_frame *frame)
{
	char			*ptr;
	int				execute_val;
	t_table			do_now;

	frame->str = ft_strdup(" s a b p r sa sb ss pa pb ra rb rr rra rrb rrr");
	display_stacks(frame);
	while ((get_next_line(0, &frame->line)) == 1)
	{
		ptr = ft_strstr(frame->str, frame->line);
		execute_val = ptr - frame->str;
		if (execute_val > 43 || execute_val < 0 || ft_strchr(frame->line, ' '))
			push_swap_error(frame);
		do_now = do_launch_value(execute_val);
		do_now(frame);
		display_stacks(frame);
		free(frame->line);
		frame->line = NULL;
	}
}
