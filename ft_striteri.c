/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 23:02:43 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/11/27 23:08:20 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_libft.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &(s[i]));
		i++;
	}
}
