/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:53:03 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/23 09:53:25 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int main() {
    int x = -5;
    int y = 3;
    printf("ABS(%d) = %d\n", x, ABS(x)); 
    printf("ABS(%d) = %d\n", y, ABS(y)); 

    printf("ABS(%d - %d) = %d\n", y, x, ABS(y - x));

    return 0;
}
