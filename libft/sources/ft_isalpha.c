/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboualla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 20:45:07 by oboualla          #+#    #+#             */
/*   Updated: 2019/05/21 05:44:58 by oboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int argument)
{
	if (argument >= 'A' && argument <= 'Z')
		return (1);
	if (argument >= 'a' && argument <= 'z')
		return (1);
	else
		return (0);
}
