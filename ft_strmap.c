/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 23:09:08 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/11/28 00:30:20 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		l;
	char	*rt;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	rt = malloc(l + 1);
	if (!rt)
		return (NULL);
	rt[l] = '\0';
	while (l-- > 0)
		rt[l] = f(s[l]);
	return (rt);
}
