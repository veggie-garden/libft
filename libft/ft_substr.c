/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:39:30 by cheseo            #+#    #+#             */
/*   Updated: 2022/07/19 19:22:15 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	size;

	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (size < len + start)
		len = size - start;
	tmp = malloc(sizeof(char) * (len + 1));
	if (!tmp || !s)
		return (NULL);
	ft_strlcpy(tmp, s + start, len + 1);
	return (tmp);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "i just want this part #############";
//  	size_t size = 20;

//  	char *ret = ft_substr(str, 5, size);
// 	printf("%s\n", ret);
// }