/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 01:50:38 by edal--ce          #+#    #+#             */
/*   Updated: 2020/02/26 02:08:31 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_isspace(char in)
{
	if (in == ' ' || in == '	' || in == '\n' || in == '\t' ||
		in == '\v' || in == '\f' || in == '\r')
		return (1);
	return (0);
}