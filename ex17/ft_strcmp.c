/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:03:28 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/22 16:11:22 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return(s1[i] - s2[i]);
}

int main(void)
{
    char *s1 = "abcdef";
    char *s2 = "";

    printf("%i", ft_strcmp(s1, s2));
}