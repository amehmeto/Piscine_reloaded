/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 07:32:31 by amehmeto          #+#    #+#             */
/*   Updated: 2016/11/17 04:06:13 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		i = nb;
		while (i > 1)
		{
			nb = nb * (i - 1);
			if (nb > 2147483647 || nb < 0)
				return (0);
			i--;
		}
		return (nb);
	}
	else
		return (0);
}
