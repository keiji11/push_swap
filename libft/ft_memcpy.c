/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:50:35 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:50:35 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*newdst;
	const char	*newsrc;

	newdst = (char *)dst;
	newsrc = (char *)src;
	while (n > 0)
	{
		*newdst++ = *newsrc++;
		n--;
	}
	return (dst);
}
