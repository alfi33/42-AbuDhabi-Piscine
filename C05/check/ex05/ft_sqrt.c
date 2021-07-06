/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:05:34 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/06/02 13:09:18 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	while (i <= nb / 2 && i <= 46340)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
