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

#include <unistd.h>
#include <fcntl.h>

int    main(int ac, char **av)
{
    int        fd;
    char    buffer[1];

    if (ac == 1)
    {
        write (2, "File name missing.\n", 19);
        return (1);
    }
    else if (ac > 2)
    {
        write (2, "Too many arguments.\n", 20);
        return (1);
    }
    fd = open(av[1], O_RDONLY);
    if (fd == -1)
    {
        write (2, "Cannot read file.\n", 18);
        return (1);
    }
    while (read(fd, buffer, 1))
        write (1, buffer, 1);
    close (fd);
    return (0);
}
