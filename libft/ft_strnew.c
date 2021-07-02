/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:51:44 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:51:44 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates with malloc and returns a 'fresh' string ending with '\0'.
** Each character of the string is initialized at '\0'
** If the allocation fails, the funciton returns NULL.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	new = (char *)malloc((size + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}
