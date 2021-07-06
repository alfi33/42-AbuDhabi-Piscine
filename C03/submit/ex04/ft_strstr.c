/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdul-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:24:45 by aabdul-w          #+#    #+#             */
/*   Updated: 2021/05/30 16:32:07 by aabdul-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *s;
	char *t;

	t = to_find;
	if (*t == '\0')
		return (str);
	while (*str)
	{
		if (*str == *t)
		{
			s = str;
			while (*s == *t || *t == '\0')
			{
				if (*t == '\0')
					return (str);
				s++;
				t++;
			}
			t = to_find;
		}
		str++;
	}
	return (0);
}
