/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:59:47 by cheseo            #+#    #+#             */
/*   Updated: 2022/07/14 10:52:49 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tmp;
	unsigned char const	*str;

	i = 0;
	tmp = (unsigned char *)dst;
	str = (unsigned char const *)src;
	if (!dst)
		return (0);
	if (!n || dst == src)
		return (dst);
	while (i < n)
	{
		tmp[i] = str[i];
		i++;
	}
	return (dst);
}
