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
	char	*out;
	char	*cp;

	if (!s1 || !s2)
		return (NULL);
	if (!(out = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	cp = out;
	s1--;
	while (*(++s1))
		*(out++) = *s1;
	s2--;
	while (*(++s2))
		*(out++) = *s2;
	*out = 0;
	return (cp);
}
