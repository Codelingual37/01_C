/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:45:10 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:45:18 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;
	const unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "Hello, world!";
	char	c = 'o';
	char	*ptr = ft_memchr(str, c, 6);
	printf("%p\n", (void *)ptr);
	printf("%td\n", ptr - str);

	char	arr[] = {4, 5, 1, 8, 9};
	int	e = 8;
	char	*ptr3 = ft_memchr(arr, e, sizeof(arr));
	printf("%p\n", (void *)ptr3);
	printf("%td\n", (ptrdiff_t)((char *)ptr3 - (char *)arr));
}*/
