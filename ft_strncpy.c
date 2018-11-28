/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:31:17 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/11/24 16:41:36 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_libft.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		full_l;
	int		i;

	full_l = ft_strlen(src) + 1;
	i = 0;
	while (i < full_l && (size_t)i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while ((size_t)i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
