/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:50:48 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:50:50 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if (start > s_len)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}

/*#include <stdio.h>
int	main(void)
{
	char	*s = "This is a string. This is the substring.";
	unsigned int	start = 18;
	size_t	len = 23;
	char	*sub = ft_substr(s, start, len);
	if (sub == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	int i = 0;
	printf("%s\n", sub);
	free(sub);
}*/
