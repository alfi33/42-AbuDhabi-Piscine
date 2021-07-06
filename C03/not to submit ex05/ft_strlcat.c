/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:36:44 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/05/30 16:48:47 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	unsigned int length;

	i = 0;
	length = 0;
	while (dest[i])
	{
		length++;
		i++;
	}
	i = 0;
	while (src[i] != '\0' && (length < (size - 1)))
	{
		dest[length] = src[i];
		length++;
		i++;
	}
	dest[length] = '\0';
	return (length);
}

int		main(void)
{
   char dest[16] = "check";
   char *src = "medfsdfsdfdf";

    printf(" the result is : %d", ft_strlcat(src, dest,2));

}
