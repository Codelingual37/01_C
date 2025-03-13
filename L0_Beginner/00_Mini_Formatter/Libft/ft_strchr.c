/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:48:37 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:48:39 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "Hello, world!";
	char	c = 'o';
	char	*ptr = ft_strchr(str, c);
	printf("%p\n", ft_strchr(str, c));
	printf("%ld\n", ptr - str);
}*/
