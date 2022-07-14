/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:53:56 by cheseo            #+#    #+#             */
/*   Updated: 2022/07/14 10:53:23 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	size_t		j;
	char		*tmp;
	char const	*str;

	i = 0;
	j = 0;
	tmp = dst;
	str = src;
	if (!dst || !src)
		return (dst);
	while (tmp[j])
		j++;
	while (i < len)
	{
		tmp[j] = str[i];
		i++;
		j++;
	}
	return (dst);
}
