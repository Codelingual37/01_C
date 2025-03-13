/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:50:56 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:50:58 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/*#include <stdio.h>
int main(void) {

	char	c = 'c';
	char	d = 'D';
	printf("%c\n", ft_tolower(c));
	printf("%c\n", ft_tolower(d));
}*/
