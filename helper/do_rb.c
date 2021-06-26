/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keiji-pop <keiji-pop@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:04:50 by keiji-pop         #+#    #+#             */
/*   Updated: 2021/06/26 19:04:53 by keiji-pop        ###   ########.fr       */
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
