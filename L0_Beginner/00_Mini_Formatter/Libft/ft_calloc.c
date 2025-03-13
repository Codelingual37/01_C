/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:43:40 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:43:45 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*zero;
	size_t	i;

	if (nmemb > 0 && size > 0 && nmemb > (UINT_MAX / size))
		return (NULL);
	zero = malloc(nmemb * size);
	if (zero == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		*(char *)(zero + i) = 0;
		i++;
	}
	return (zero);
}

/*#include <stdio.h>
int	main(void)
{
	int	*arr = (int *)ft_calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	int	j = 0;
	while (j < 5)
	{
		printf("%d ", arr[j]);
		j++;
	}
	printf("\n");
	free(arr);
}*/
