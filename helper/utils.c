/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keiji-pop <keiji-pop@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:14:30 by llucente          #+#    #+#             */
/*   Updated: 2021/06/26 18:20:01 by keiji-pop        ###   ########.fr       */
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

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	x;

	x = 0;
	while (s1[x] && s2[x] && s1[x] == s2[x])
		x++;
	return (((unsigned char *)s1)[x] - ((unsigned char *)s2)[x]);
}
