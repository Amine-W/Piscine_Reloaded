/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:20:41 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/26 10:49:44 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
    int a = 10;
    int b = 2;
    int *div;
    int *mod;
    ft_div_mod(a, b, &div, &mod);
    printf("div: %i", div);
    printf("mod: %i", mod);
}*/
