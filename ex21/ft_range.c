/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:02:05 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/26 11:03:10 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int *)malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*int main(void)
{
    int *range;
    int i;
    int min;
    int max;

    min = 1;
    max = 10;
    range = ft_range(min, max);
 
    i = 0;
    while (i < max - min) 
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");

    free(range); 
    return 0;
}*/
