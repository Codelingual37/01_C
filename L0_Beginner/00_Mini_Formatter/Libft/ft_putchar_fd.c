/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:47:39 by djohnson          #+#    #+#             */
/*   Updated: 2024/04/04 18:47:42 by djohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <stdio.h>
#include <fcntl.h>
int main(void) {

	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}
        ft_putchar_fd('T', fd);
	ft_putchar_fd('E', fd);
	ft_putchar_fd('S', fd);
	ft_putchar_fd('T', fd);
	ft_putchar_fd('\n', fd);

	close(fd);
}*/
