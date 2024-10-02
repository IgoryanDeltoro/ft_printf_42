/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:42:30 by ibondarc          #+#    #+#             */
/*   Updated: 2024/10/02 23:19:20 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	uintptr_t	p;
	int			count;

	count = 0;
	p = (uintptr_t)ptr;
	count += write(1, "0x", 2);
	if (ptr == 0)
		count += write(1, "0", 1);
	else
	{
		hendle_ptr(p);
		count += count_ptr(p);
	}
	return (count);
}

