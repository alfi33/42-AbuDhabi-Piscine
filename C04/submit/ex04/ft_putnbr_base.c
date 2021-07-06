/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:44:02 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/06/02 09:44:15 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char *base)
{
	int j;
	int i;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int number[100];
	int base_length;

	i = 0;
	base_length = 0;
	if (ft_check(base) == 1)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[base_length])
			base_length++;
		while (nbr)
		{
			number[i] = nbr % base_length;
			nbr = nbr / base_length;
			i++;
		}
		while (--i >= 0 && base[0] != 'p')
			ft_putchar(base[number[i]]);
	}
	return (0);
}
