/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:43:15 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/05 14:33:14 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	int				sign;
	long long int	result;

	result = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + sign * (*nptr - '0');
		if ((result > INT_MAX && sign == 1) || (result < INT_MIN
				&& sign == -1))
			return (0);
		nptr++;
	}
	return (result);
}

/*#include <stdio.h>

int main(void)
{
	int result = ft_atoi("-1234ab567");
	printf("%d\n", result);

	int result2 = ft_atoi("thisisastring");
	printf("%d\n", result2);
}*/
