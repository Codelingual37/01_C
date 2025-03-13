/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:45:26 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:45:29 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	unsigned int		i;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char s1[] = "ridiculous";
	char s2[] = "ridonculous";
	int result = ft_memcmp(s1, s2, 4);
	printf("%d\n", result);
	char s3[] = "ridonculous";
	char s4[] = "ridiculous";
	result = ft_memcmp(s3, s4, 4);
	printf("%d\n", result);
	char s5[] = "ridiculous";
	char s6[] = "ridiculous";
	result = ft_memcmp(s5, s6, 4);
	printf("%d\n", result);
}*/
