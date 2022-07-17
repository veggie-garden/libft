/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:10:40 by cheseo            #+#    #+#             */
/*   Updated: 2022/07/16 18:46:52 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;
	
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, nmemb * size);
	return (tmp);
}


#include <stdio.h>

int main(void)
{
	int size;
	scanf_s("%d", &size);
	int *arr = ft_calloc(sizeof(int), size);
	for (int i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}