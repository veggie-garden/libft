/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:00:09 by cheseo            #+#    #+#             */
/*   Updated: 2022/07/16 16:35:44 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	flag;

	i = 0;
	n = 0;
	flag = 1;
	while (is_space(str[i]) && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	n *= flag;
	return (n);
}
