/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:45:35 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:45:38 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	unsigned int		i;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int main(void) {

	unsigned int n = 8;
	char string[] = "Hello, World!";
	char copy[sizeof(string)];
	char* src = string;
	char* dest = copy;
	ft_memcpy(dest, src, n);
	printf("Copied string: %s\n", copy);

}*/
