/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 02:24:48 by amehmeto          #+#    #+#             */
/*   Updated: 2016/11/15 05:48:57 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		ft_putstr(av[i++]);
		ft_putstr("\n");
	}
	return (1);
}
