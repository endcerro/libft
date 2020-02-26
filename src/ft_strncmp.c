/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 14:36:10 by edal--ce          #+#    #+#             */
/*   Updated: 2020/02/18 17:38:12 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1t;
	unsigned char	*s2t;

	s1t = (unsigned char *)s1;
	s2t = (unsigned char *)s2;
	i = 0;
	while (s1t[i] == s2t[i] && i < n && s2t[i] && s1t[i])
	{
		if (s1t[i] != s2t[i])
			return (s1t[i] - s2t[i]);
		i++;
	}
	if ((s1t[i] != s2t[i]) && i < n)
		return ((s1t[i] - s2t[i]));
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	size_t			i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] && s1[i])
		i++;
	if (s1[i] == 0 && s2[i] == 0)
		return (1);
	return (0);
}
