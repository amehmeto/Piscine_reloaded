/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 00:47:36 by amehmeto          #+#    #+#             */
/*   Updated: 2016/11/15 06:45:53 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		a;

	if (nb < 0)
		return (0);
	a = 2;
	a = (a + nb / a) / 2;
	if (a > 46340)
		a = 46340;
	while (a * a > nb)
		a = (a + nb / a) / 2;
	if (a * a == nb)
		return (a);
	else
		return (0);
}