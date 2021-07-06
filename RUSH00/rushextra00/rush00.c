/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalhosa <maalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:12:28 by maalhosa          #+#    #+#             */
/*   Updated: 2021/05/22 17:26:34 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_middle_part(int x, int j)
{
	if (j == 0)
	{
		ft_putchar('|');
	}
	else if (j == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_print_first_or_last_line(int x, int j)
{
	if (j == 0)
	{
		ft_putchar('o');
	}
	else if (j == x - 1)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				if (i == 0 || i == y - 1)
					ft_print_first_or_last_line(x, j);
				else
					ft_print_middle_part(x, j);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
