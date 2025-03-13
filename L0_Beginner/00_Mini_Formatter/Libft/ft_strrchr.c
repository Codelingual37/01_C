/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:50:27 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:50:28 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		if (s[i - 1] == (char)c)
		{
			return ((char *)&s[i - 1]);
		}
		i--;
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
	char	*ptr = ft_strrchr(str, c);
	printf("%p\n", ft_strrchr(str, c));
	printf("%ld\n", ptr - str);
}*/
