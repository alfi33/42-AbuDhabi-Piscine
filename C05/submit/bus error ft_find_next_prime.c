/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:01:36 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/06/02 18:06:35 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(unsigned int n, unsigned int i)
{
	if ( n % i == 0)
		return (0);
	if ( i * i > n)
		return (1);
	return (is_prime(n, i + 1));
}

int		ft_is_prime(int nb)
{
	if (nb < 2 )
		return (0);
	if (nb == 2)
		return (1);
	return (is_prime((unsigned int)nb, 2));
}

int		ft_find_next_prime(int nb)
{
	int		not_fd;
	unsigned int i;

	i = (unsigned int)nb;
	not_fd = 1;
	while (not_fd)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}	
