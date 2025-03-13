/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:49:15 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:49:18 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = 0;
	srclen = 0;
	while (dst[destlen] != '\0' && destlen < size)
		destlen++;
	while (src[srclen] != '\0' && (destlen + srclen + 1) < size)
	{
		dst[destlen + srclen] = src[srclen];
		srclen++;
	}
	if (destlen < size)
		dst[destlen + srclen] = '\0';
	while (src[srclen] != '\0')
		srclen++;
	return (destlen + srclen);
}

/*
int main(void)
{
	char	dest[20] = "Hello";
	char	src[] = " World!";
	unsigned int size = sizeof(dest);
	unsigned int result = ft_strlcat(dest, src, size);
	printf("%d\n", result);
}*/
