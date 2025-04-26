/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:51:12 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/26 10:50:11 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		total *= nb;
		nb--;
	}
	return (total);
}

/*int main(void)
{
    int    a = 6;
    printf("%i",ft_iterative_factorial(a));
    return 0;
}*/
