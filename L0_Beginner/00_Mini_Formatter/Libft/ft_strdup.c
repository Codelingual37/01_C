/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:48:47 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:48:48 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ns;
	int		len;
	int		i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	ns = (char *)malloc((len + 1) * sizeof(char));
	if (ns == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		ns[i] = s[i];
		i++;
	}
	ns[len] = '\0';
	return (ns);
}

/*#include <stdio.h>
int	main(void)
{
	char	*s = "Hello, World!";
	char	*ns = ft_strdup(s);
	if (ns == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	printf("%s\n", ns);
	free(ns);
}*/
