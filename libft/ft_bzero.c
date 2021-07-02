/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:49:32 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:49:32 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes n zeroed bytes into the string s
** If n is zero, bzero() does nothing
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	i;

	c = (char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
