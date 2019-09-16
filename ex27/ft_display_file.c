/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:19:06 by trobbin           #+#    #+#             */
/*   Updated: 2019/09/11 19:34:03 by trobbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sys.h"

int	main(int argc, char **argv)
{
	int		bytes;
	int		fd;
	char	buffer[6];

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((bytes = (read(fd, buffer, 5))))
			write(1, &buffer, bytes);
	}
	else if (argc == 1)
		write(1, "File name missing.\n", 19);
	else
		write(1, "Too many arguments.\n", 20);
	return (0);
}
