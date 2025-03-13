/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:44:46 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:44:51 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	countplaces(int n)
{
	int	places;

	places = 0;
	if (n < 1)
		places++;
	while (n)
	{
		n /= 10;
		places++;
	}
	return (places);
}

static char	*strhold(size_t n)
{
	char	*numstr;

	numstr = (char *)malloc((n + 1) * sizeof(char));
	if (numstr == NULL)
		return (NULL);
	return (numstr);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				places;
	char			*numstr;

	num = 1;
	if (n < 0)
		num *= -n;
	else
		num *= n;
	places = countplaces(n);
	numstr = strhold(places);
	numstr[places] = '\0';
	places--;
	while (places >= 0)
	{
		numstr[places] = num % 10 + '0';
		num /= 10;
		places--;
	}
	if (n < 0)
		numstr[0] = '-';
	return (numstr);
}

/*#include <stdio.h>
int	main(void)
{
	int	n = -150354;
	char	*numstr = ft_itoa(n);
	if (numstr == NULL)
	{
		printf("Memory allocation failed.")
			return (1);
	}
	printf("%s\n", numstr);
	free(numstr);
}*/
