/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:44:17 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:44:20 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	c;
	int	d;
	d = 'l';
	c = 128;
	printf("%d\n", ft_isascii(d));
	printf("%d\n", ft_isascii(c));
}*/
