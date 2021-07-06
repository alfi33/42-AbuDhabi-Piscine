/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_old.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:31:28 by nali              #+#    #+#             */
/*   Updated: 2021/05/31 09:18:24 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_sqrt(int nb, long sqrt)
{
	if (sqrt * sqrt <= 2147483647)
	{
		if (nb < (sqrt * sqrt))
		{
			return (0);
		}
		else if ((sqrt * sqrt) < nb)
		{
			sqrt += 1;
			return (ft_find_sqrt(nb, sqrt));
		}
		else
		{
			return (sqrt);
		}
	}
	else
		return (0);
}

int	ft_sqrt(int nb)
{
	long sqrt;

	sqrt = 2;
	if (nb <= 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	return (ft_find_sqrt(nb, sqrt));
}
