/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:50:20 by edal--ce          #+#    #+#             */
/*   Updated: 2023/07/19 17:13:07 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	
	if (s == 0 || fd == -1)
		return ;
	int ret;
	ret = write(fd, s, ft_strlen((const char*)s));
	ret = write(fd, "\n", 1);
	(void)ret;
}
