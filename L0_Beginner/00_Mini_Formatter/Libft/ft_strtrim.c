/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:50:35 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:50:38 by djohnson         ###   ########.fr       */
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

static int	indbac(char const *s1, char const *set, int index)
{
	int	i;

	while (index >= 0)
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[index] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		index--;
	}
	return (index);
}

static int	indfor(char const *s1, char const *set, unsigned int index)
{
	int	i;

	while (s1[index] != '\0')
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[index] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		index++;
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;
	int		trimlen;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = indfor(s1, set, 0);
	end = indbac(s1, set, ft_len(s1) - 1);
	if (start > end)
		trimlen = 0;
	else
		trimlen = end - start + 1;
	trimmed = (char *)malloc((trimlen + 1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (i < trimlen)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[trimlen] = '\0';
	return (trimmed);
}

/*#include <stdio.h>
int	main(void)
{
	char	*s1 = "\t	Hello, World!\n\t	";
	char	*set = "	\n";
	char	*trimmed = ft_strtrim(s1, set);
	if (trimmed == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	for (size_t i = 0; i < ft_strlen(trimmed); i++)
		printf("%c(%d) ", trimmed[i], trimmed[i]);
	printf("\n");
	free(trimmed);
}*/
