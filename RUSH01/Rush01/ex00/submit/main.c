/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmohame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 19:12:22 by ahmohame          #+#    #+#             */
/*   Updated: 2021/05/30 10:11:21 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_makeboard(int *input);

int		ft_checkandinput(char *arg, int *input)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	while (arg[i])
	{
		if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
					|| ((arg[i + 1] == 0) && (arg[i - 1] == ' '))))
		{
			input[out] = (arg[i] - '0');
			out++;
			i++;
		}
		if (arg[i] == 32)
			i++;
		else
			return (out);
	}
	input[out] = '\0';
	return (out);
}

int		main(int argc, char **argv)
{
	int input[16];
	int i;
	int k;

	i = 0;
	k = 0;
	if (argc == 2)
	{
		i = ft_checkandinput(argv[1], input);
		if (i == 16)
			ft_makeboard(input);
		else
			write(1, "ERROR\n", 6);
	}
	else
		write(1, "ERROR\n", 6);
	return (0);
}
