/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:48:28 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:48:30 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	subcount(char const *s, char c, int i)
{
	int	csub;

	csub = 0;
	while (s[i] != c && s[i] != '\0')
	{
		csub++;
		i++;
	}
	return (csub);
}

static int	csubstring(char const *s, char c)
{
	int	i;
	int	cnum;
	int	in_word;

	i = 0;
	cnum = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (!in_word && s[i] != c)
		{
			cnum++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (cnum);
}

static char	**fill_strarr(char const *s, char c, char **strarr, int substrcount)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && j < substrcount)
	{
		while (s[i] == c)
			i++;
		strarr[j] = (char *)malloc((subcount(s, c, i) + 1) * sizeof(char));
		if (!strarr[j])
		{
			while (j-- > 0)
				free(strarr[j]);
			free(strarr);
			return (NULL);
		}
		ft_strncpy(strarr[j], s + i, subcount(s, c, i));
		strarr[j][subcount(s, c, i)] = '\0';
		i += subcount(s, c, i);
		j++;
	}
	strarr[j] = NULL;
	return (strarr);
}

char	**ft_split(char const *s, char c)
{
	int		substrcount;
	char	**strarr;

	if (s == NULL)
		return (NULL);
	substrcount = csubstring(s, c);
	strarr = (char **)malloc((substrcount + 1) * sizeof(char *));
	if (strarr == NULL)
		return (NULL);
	return (fill_strarr(s, c, strarr, substrcount));
}

/*#include <stdio.h>
int	main(void)
{
	char	*s = "I want to, split, this, string.";
	char	c = ',';
	char	**split = ft_split(s, c);
	if (split == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	else
	{
		printf("Memory allocation for split array succeeded.\n");
	}
	for (int i = 0; split[i] != NULL; i++)
		printf("%s\n", split[i]);
	free(split);
}*/
