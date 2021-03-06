/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfre.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hessabra <hessabra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 23:32:48 by hessabra          #+#    #+#             */
/*   Updated: 2019/10/11 00:51:45 by hessabra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		dfre(char **tabe)
{
	int		i;

	if (tabe)
	{
		i = 0;
		while (tabe[i])
		{
			ft_strdel(&(tabe[i]));
			i++;
		}
		free(tabe);
		tabe = NULL;
	}
}
