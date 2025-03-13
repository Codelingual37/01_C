/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:44:37 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:44:40 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	c = '\n';
	printf("%d\n", ft_isprint(d));
	printf("%d\n", ft_isprint(c));
}*/
