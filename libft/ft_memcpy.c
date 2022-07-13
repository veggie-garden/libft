/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:59:47 by cheseo            #+#    #+#             */
/*   Updated: 2022/07/13 21:22:37 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*tmp;
	char const		*str;

	i = 0;
	tmp = dst;
	str = src;
	if (!dst)
		return (0);
	if (!n || dst == src)
		return (dst);
	while (str[i] && i + 1 < n)
	{
		tmp[i] = str[i];
		i++;
	}
	return (dst);
}
