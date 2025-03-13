/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:43:31 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:43:33 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello, world!";
	size_t len = sizeof(str) - 1;
	int	times = 5;
	ft_bzero(str, times);
	for (size_t i = 0; i < len; i++)
	{
		printf("%c(%d) ", str[i], str[i]);
	}
	printf("\n");
}*/
