/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:53:22 by cheseo            #+#    #+#             */
/*   Updated: 2022/07/08 19:54:43 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)s;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}
