/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:48:53 by edal--ce          #+#    #+#             */
/*   Updated: 2019/11/13 21:34:58 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*out;
	size_t	j;

	j = 0;
	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	if (!(out = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	while (i < ft_strlen(s1))
		out[j++] = s1[i++];
	i = 0;
	while (i < ft_strlen(s2))
		out[j++] = s2[i++];
	out[j] = 0;
	return (out);
}
