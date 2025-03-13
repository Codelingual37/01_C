/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:47:12 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:47:14 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	unsigned int		i;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (dest_ptr < src_ptr)
	{
		i = 0;
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else if (dest_ptr > src_ptr)
	{
		i = n;
		while (i > 0)
		{
			dest_ptr[i - 1] = src_ptr[i - 1];
			i--;
		}
	}
	return (dest);
}

/*#include <stdio.h>
int main(void) {

	char string[] = "Hello, World!";
	unsigned int n = sizeof(string);
	char copy[sizeof(string)] = "Hello, Jim!";
	char* src = string;
	char* dest = copy;
	ft_memmove(dest, src, n);
	printf("Copied string: %s\n", dest);

}*/
