/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:23:37 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/05/30 15:08:08 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	char *s;
	char *t;
	int count;

	t = to_find;
	count = 1;
	if (*to_find  == '\0')
		return (str);
	while (*t != '\0')
	{
		count++;
		t++;
	}

	while (*str != '\0')
	{
		if (*str == *t)
		{
			*s = *str;
			if(ft_strncmp(s, t, count) == 0)
				return (str);
			else
				return (0);
		}
		str++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i <= n)
	{
		if (*s1++ != *s2++)
			return (*s1 - *s2);
		i++;
	}
	return (0);
}

int		main(void)
{
    char dest[16] = "check";
    char *src = "medfcheckdfdf";

    printf(" the result is : %s", ft_strstr(src,dest));
}
