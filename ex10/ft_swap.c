/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:31:01 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/24 10:50:51 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
    int a = 42;
    int b = 1337;
    int *ptra = &a;
    int *ptrb = &b;
    ft_swap(ptra, ptrb);
    printf("a: %i", a);
    printf("b: %i", b);
}
