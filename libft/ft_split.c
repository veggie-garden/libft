/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:00:44 by cheseo            #+#    #+#             */
/*   Updated: 2022/07/20 09:15:17 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

static char	*ft_strcopy(const char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*dest;

	i = 0;
	len = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i + len] && str[i + len] != c)
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	j = 0;
	while (j < len)
		dest[j++] = str[i++];
	dest[j] = '\0';
	return (dest);
}

static char	**ft_free(char **res)
{
	size_t	idx;

	idx = 0;
	while (res[idx])
	{
		free(res[idx]);
		idx++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		idx;
	int		word_cnt;
	char	**res;

	word_cnt = ft_count_word(s, c);
	res = malloc(sizeof(char *) * (word_cnt + 1));
	if (!res)
		return (NULL);
	res[word_cnt] = NULL;
	idx = 0;
	while (idx < word_cnt)
	{
		while (*s && *s == c)
			s++;
		res[idx] = ft_strcopy(s, c);
		if (!res[idx])
			return (ft_free(res));
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		idx++;
	}
	return (res);
}
