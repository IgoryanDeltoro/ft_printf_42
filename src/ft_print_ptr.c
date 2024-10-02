/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:42:30 by ibondarc          #+#    #+#             */
/*   Updated: 2024/10/02 23:41:26 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	char	*hex_digits;
	int			count;

	count = 0;	
	hex_digits = "0123456789abcdef";
	if (ptr == 0)
		count += ft_print_str("(nil)");
	else
	{
		count += write(1, "0x", 2);
		count += ft_puthex((uintptr_t)ptr, hex_digits);
	}
	return (count);
}

