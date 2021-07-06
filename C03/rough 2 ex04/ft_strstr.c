/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:11:41 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/05/30 16:15:15 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (*to_find)
	{
		count++;
	}
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (to_find[j] != '\0')
			{
				if (str[i + j] == to_find[j])
					j++;
				else 
					break ;
			}
			if (j == count)
				return (str + i);
		}
		i++;
	}
	return (NULL);
}

int		main(void)
{
    char dest[16] = "check";
    char *src = "medfsdfsdfdf";

    printf(" the result is : %s", ft_strstr(src,dest));

}
