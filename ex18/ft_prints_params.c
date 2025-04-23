/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:24:52 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/22 16:41:08 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc <= 1)
		return (0);
	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar("\n");
		i++;
	}
}
