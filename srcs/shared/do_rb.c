/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:55:06 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:55:07 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rb(t_frame *frame)
{
	if (frame->b)
		frame->b = frame->b->next;
	if (frame->do_write)
		write(1, "rb\n", 3);
}
