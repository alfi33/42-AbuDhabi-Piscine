/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 18:46:11 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/06/01 11:42:12 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int negative;
	int ans;

	negative = 1;
	ans = 0;
	while (*str != '\0' && (*str == ' ' || *str == '\f' || *str == '\n' ||
				*str == '\r' || *str == '\t' || *str == '\v'))
	{
		++str;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = negative * -1;
		++str;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - 48);
		++str;
	}
	return (ans * negative);
}
