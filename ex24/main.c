/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:15:06 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/24 11:15:06 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

int main(void)
{
    printf("\n=== Test de toutes les fonctions de la libft ===\n\n");

    // Test ft_putchar
    printf("Test ft_putchar:\n");
    printf("Attendu : A B C\nObtenu  : ");
    ft_putchar('A');
    ft_putchar(' ');
    ft_putchar('B');
    ft_putchar(' ');
    ft_putchar('C');
    printf("\n\n");

    // Test ft_putstr
    printf("Test ft_putstr:\n");
    printf("Attendu : Hello, World!\nObtenu  : ");
    ft_putstr("Hello, World!");
    printf("\n\n");

    // Test ft_strlen
    printf("Test ft_strlen:\n");
    printf("Attendu : 13 (pour 'Hello, World!')\n");
    printf("Obtenu  : %d\n", ft_strlen("Hello, World!"));
    printf("Attendu : 0 (pour '')\n");
    printf("Obtenu  : %d\n", ft_strlen(""));
    printf("\n");

    // Test ft_strcmp
    printf("Test ft_strcmp:\n");
    printf("Attendu : 0 (pour 'abc' et 'abc')\n");
    printf("Obtenu  : %d\n", ft_strcmp("abc", "abc"));
    printf("Attendu : < 0 (pour 'abc' et 'abd')\n");
    printf("Obtenu  : %d\n", ft_strcmp("abc", "abd"));
    printf("Attendu : > 0 (pour 'abd' et 'abc')\n");
    printf("Obtenu  : %d\n", ft_strcmp("abd", "abc"));
    printf("\n");

    // Test ft_swap
    int a = 42;
    int b = 21;
    printf("Test ft_swap:\n");
    printf("Avant swap : a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("Après swap : a = %d, b = %d\n\n", a, b);

    printf("=== Fin des tests ===\n");
    return 0;
}