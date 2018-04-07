/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 19:10:13 by amehmeto          #+#    #+#             */
/*   Updated: 2016/11/15 06:00:00 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;
	int		j;

	if (min >= max)
		return (NULL);
	else
	{
		tab = (int*)malloc(sizeof(int) * (max - min + 1));
		i = 0;
		j = min;
		while (j < max)
		{
			tab[i++] = j++;
		}
		tab[i] = '\0';
		return (tab);
	}
}
