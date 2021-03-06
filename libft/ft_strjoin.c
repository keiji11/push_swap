/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:51:29 by llucente          #+#    #+#             */
/*   Updated: 2021/07/02 15:51:29 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending
** with ’\0’, result of the concatenation of s1 and s2.
** If the allocation fails the function returns NULL.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;

	if (!s1 || !s2)
		return (0);
	fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(fresh))
		return (NULL);
	if (s1)
		ft_strcpy(fresh, s1);
	if (s2)
		ft_strcat(fresh, s2);
	return (fresh);
}
