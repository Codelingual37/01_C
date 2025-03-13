/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:51:08 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:51:09 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

/*#include <stdio.h>
int main(void) {

	char	c = 'c';
	char	d = 'D';
	printf("%c\n", ft_toupper(c));
	printf("%c\n", ft_toupper(d));
}*/
