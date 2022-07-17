/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:03:58 by cheseo            #+#    #+#             */
/*   Updated: 2022/07/16 16:37:19 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*tmp1;
	const char	*tmp2;

	i = 0;
	tmp1 = s1;
	tmp2 = s2;
	while (tmp1[i] && tmp2[i] && i < n)
	{
		if ((unsigned)tmp1[i] == (unsigned)tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	if (i == n)
		i--;
	return (tmp1[i] - tmp2[i]);
}
