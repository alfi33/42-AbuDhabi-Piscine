/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:50:16 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/05/30 12:54:34 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		length++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
