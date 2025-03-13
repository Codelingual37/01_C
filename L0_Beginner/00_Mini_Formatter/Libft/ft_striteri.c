/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:48:54 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:48:56 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void	ft_upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
	}
}
int	main(void)
{
	char	str[] = "hello, world!";
	ft_striteri(str, &ft_upper);
	printf("%s\n", str);
}*/
