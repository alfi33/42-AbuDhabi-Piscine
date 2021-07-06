/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:50:16 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/05/31 18:18:10 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int				ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int length;
	unsigned int i;

	length = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		length++;
		i++;
	}
	i = 0;
	while ((src[i] != '\0') && (i < (size - length - 1)))
	{
		dest[length + i] = src[i];
		i++;
	}
	if (length < size)
		dest[length + i] = '\0';
	return (length + ft_strlen(src));
}

int main()
{
	char d1[20] = "Hello world";
	char d2[20] = "Hello world";
	char s[] = "!!!!";
	printf("%d\n", ft_strlcat(d1, s, 3));
	printf("%d\n", strlcat(d2, s, 3));
	
}
