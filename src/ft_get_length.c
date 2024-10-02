/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <ibondarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:54:59 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/26 09:27:36 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_get_length(uintptr_t n, int type)
{
	int	len;
	
	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= type;
	}
	return (len);
}
