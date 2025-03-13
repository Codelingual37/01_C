/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:49:04 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:49:06 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_len(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		totallen;
	int		i;
	int		j;

	totallen = ft_len(s1) + ft_len(s2);
	join = (char *)malloc((totallen + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[totallen] = '\0';
	return (join);
}

/*#include <stdio.h>
int	main(void)
{
	char *s1 = "cat";
	char *s2 = "dog";
	char *join = ft_strjoin(s1, s2);
	if (join == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("%s\n", join);
	free(join);
}*/
