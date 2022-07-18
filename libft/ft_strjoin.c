/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:56:13 by cheseo            #+#    #+#             */
/*   Updated: 2022/07/18 09:30:02 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*tmp;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	tmp = (sizeof(char) * (len1 + len2 + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		tmp[i] = s1[i];
		i++;
	}
	while (i < len2)
	{
		tmp[i] = s2[i];
		i++;
	}
	return (tmp);
}
