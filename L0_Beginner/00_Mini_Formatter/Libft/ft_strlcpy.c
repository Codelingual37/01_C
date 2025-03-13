/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:49:27 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:49:28 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	srclen;

	srclen = 0;
	while (src[srclen] != '\0' && (srclen + 1) < size)
	{
		dst[srclen] = src[srclen];
		srclen++;
	}
	if (srclen < size)
		dst[srclen] = '\0';
	while (src[srclen] != '\0')
		srclen++;
	return (srclen);
}

/*#include <stdio.h>
int main(void)
{
	char	dest[30] = "";
	char	src[] = "This is a test string.";
	unsigned int size = sizeof(dest);
	unsigned int result = ft_strlcpy(dest, src, size);
	printf("%d\n", result);
}*/
