/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:45:47 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/24 11:45:47 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_foreach(int *tab, int length, void (*f)(int))
{
    int    i;

    if (!tab || !f || length <= 0)
        return;

    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}


#include <stdio.h>

void    ft_putnbr(int n)
{
    printf("%d\n", n);
}

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    ft_foreach(tab, 5, &ft_putnbr);
    
    
    ft_foreach(NULL, 5, &ft_putnbr);
    ft_foreach(tab, -1, &ft_putnbr);
    ft_foreach(tab, 5, NULL);
    return (0);
}

