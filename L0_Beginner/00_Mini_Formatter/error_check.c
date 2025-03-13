#include "Libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

int	input_output(char *argv)
{
	char	*sub;
	char	*txt;

	txt = ".txt";
	sub = ft_substr(argv, ft_strlen(argv) - 4, 4);
	while (*sub)
	{
		if (*sub != *txt)
			return (0);
		sub++;
		txt++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char *test = "asdoifjaosdjioij.txt";
	int result = input_output(test);
	printf("%d\n", result);
}*/