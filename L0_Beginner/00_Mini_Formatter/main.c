#include "mini_formatter.h"
#include <stdlib.h>
#include <unistd.h>

char	*read_line(char *line)
{
}

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	if (input_output(argv[1]) == 0 || input_output(argv[2]) == 0)
		return (1);
}