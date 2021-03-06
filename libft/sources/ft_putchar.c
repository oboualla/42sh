/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboualla <oboualla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:24:45 by oboualla          #+#    #+#             */
/*   Updated: 2020/02/09 00:54:11 by oboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	if (c < 0)
	{
		c *= -1;
		while (c)
		{
			ft_putchar(' ');
			c--;
		}
	}
	else
	{
		write(1, &c, 1);
	}
}
