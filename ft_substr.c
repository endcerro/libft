/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:47:12 by edal--ce          #+#    #+#             */
/*   Updated: 2019/11/13 21:33:05 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*out;

	if (s == 0)
		return (0);
	i = 0;
	if (!(out = malloc(sizeof(char) * (len + 1))))
		return (0);
	if (ft_strlen(s) < start)
	{
		out[0] = 0;
		return (out);
	}
	while (i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = 0;
	return (out);
}
