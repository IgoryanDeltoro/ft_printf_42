/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <ibondarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:42:30 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/25 16:42:43 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	char *hex_digits;
   	int len = 0;
	
	hex_digits = "0123456789abcdef";
	if (!ptr)
        	return (write(1, "(nil)", 5));
   	len = write(1, "0x", 2);
    	len += ft_puthex((uintptr_t)ptr, hex_digits);
    	return (len);
}

