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

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int argc, char **argv)
{
	int fd;
	int	bytes_read;
	char	buf[1024];
	
	if (argc < 2)
    {
        write(2, "File name missing.", 19);
        return (1);
    }
    else if (argc > 2)
    {
        write(2, "Too many arguments.", 20);
		return(1);
    }
	
	fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
		write(2, "Unable to open file.\n", 21);
		return (1);
	}
		
	while ((bytes_read = read(fd, buf, sizeof(buf))) > 0)
	{
		write(1, buf, bytes_read);
	}
	
		
	if (bytes_read == -1)
	{
		write(2, "Cannot read file.\n", 18);
		close(fd);
		return (1);
	}
	
	close(fd);
	
	return (0);
}