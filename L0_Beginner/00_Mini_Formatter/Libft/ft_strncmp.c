/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:49:54 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:49:57 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int main(void)
{
	char s1[] = "ridiculous";
	char s2[] = "ridonculous";
	int result = ft_strncmp(s1, s2, 4);
	printf("%d\n", result);
	char s3[] = "ridonculous";
	char s4[] = "ridiculous";
	result = ft_strncmp(s3, s4, 4);
	printf("%d\n", result);
	char s5[] = "ridiculous";
	char s6[] = "ridiculous";
	result = ft_strncmp(s5, s6, 4);
	printf("%d\n", result);
}*/
