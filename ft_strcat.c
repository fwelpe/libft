/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:42:37 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/11/24 17:12:50 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_libft.h>

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[s1_len + i] = s2[i];
		i++;
	}
	s1[s1_len + i] = '\0';
	return (s1);
}
