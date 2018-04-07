/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:14:38 by amehmeto          #+#    #+#             */
/*   Updated: 2016/11/17 01:44:42 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		counter(char *src)
{
	int		c;
	char	*src_cpy;

	src_cpy = src;
	c = 0;
	while (*src)
	{
		c++;
		src++;
	}
	src = src_cpy;
	return (c);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size_needed;
	char	*dup;

	size_needed = counter(src);
	dup = (char*)malloc(sizeof(char) * (size_needed + 1));
	if (dup == NULL)
		exit(9);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
