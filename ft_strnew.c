/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 18:22:40 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/11/27 18:23:42 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_libft.h>

void	*ft_strnew(size_t size)
{
	char	*p;

	p = malloc(++size);
	if (!p)
		return (NULL);
	while (size)
		p[--size] = '\0';
	return (p);

}
