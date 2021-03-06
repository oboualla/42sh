/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_to_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboualla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 08:41:07 by oboualla          #+#    #+#             */
/*   Updated: 2020/02/02 22:28:53 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_to_fd(char *str, char c, int fd)
{
	size_t i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	write(fd, str, i);
}
