/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 07:44:17 by amehmeto          #+#    #+#             */
/*   Updated: 2016/11/15 10:32:40 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int		counteur;
	int		i;

	i = 0;
	counteur = 0;
	while (tab[i])
	{
		if (f(tab[i++]))
			counteur++;
	}
	return (counteur);
}
