/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:42:03 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/22 17:09:56 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return(s1[i] - s2[i]);
}

void    ft_swap(char **a, char **b)
{
        char    *temp;

        temp = *a;
        *a = *b;
        *b = temp;
}

void    ft_sort_params(int argc, char **argv)
{
        int     i;
        int     j;

        i = 1;
        while (i < argc - 1)
        {
                j = i + 1;
                while (j < argc)
                {
                        if (ft_strcmp(argv[i], argv[j]) > 0)
                        {
                                ft_swap(&argv[i], &argv[j]);
                        }
                j++;
                }
        i++;
        }
}


int     main(int argc, char **argv)
{
        int     i;

        if (argc > 1)
        {
                ft_sort_params(argc, argv);
                i = 1;
                while (i < argc)
                {
                        ft_putstr(argv[i]);
                        write(1, "\n", 1);
                        i++;
                }
                return (0);
        }
        return (0);
}