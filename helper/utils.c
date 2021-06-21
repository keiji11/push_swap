/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:14:30 by llucente          #+#    #+#             */
/*   Updated: 2021/06/21 19:21:18 by llucente         ###   ########.fr       */
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
