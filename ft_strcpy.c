/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:14:07 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/11/24 17:14:37 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_libft.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int		full_l;
	int		i;

	full_l = ft_strlen(src) + 1;
	i = 0;
	while (i < full_l)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
