/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:18:29 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/25 13:18:29 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	check_argc(int argc);
int	open_file(char *filename);
int	read_and_write_file(int fd);

int	main(int argc, char **argv)
{
	int	fd;

	if (check_argc(argc))
		return (1);
	fd = open_file(argv[1]);
	if (fd == -1)
		return (1);
	if (read_and_write_file(fd))
		return (1);
	close(fd);
	return (0);
}

int	check_argc(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.", 20);
		return (1);
	}
	return (0);
}

int	open_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Unable to open file.", 21);
	}
	return (fd);
}

int	read_and_write_file(int fd)
{
	int		bytes_read;
	char	buf[1];

	bytes_read = read(fd, buf, 1);
	while (bytes_read > 0)
	{
		write(1, buf, bytes_read);
		bytes_read = read(fd, buf, 1);
	}
	if (bytes_read == -1)
	{
		write(2, "Cannot read file.", 18);
		close(fd);
		return (1);
	}
	return (0);
}
