/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:48:14 by ibondarc          #+#    #+#             */
/*   Updated: 2024/10/03 22:40:28 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_handle_char(va_list args, char *format );

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total_len;

	va_start(args, format);
	total_len = ft_handle_char(args, (char *)format);
	va_end(args);
	return (total_len);
}

static int	ft_handle_char(va_list args, char *format )
{
	int		total_len;

	total_len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			if (*(++format) == ' ' || *format == '\0')						
				return (-1);		
			if (*format == 'd' || *format == 's' || *format == 'c' || *format == 'x' || *format == 'X' 
			 	|| *format == 'u' || *format == 'i' || *format == 'p' || *format == '%')
                total_len += ft_handle_args(args, *format);
            else if (*format != '%' && *format != ' ' && *format != '\0')
            {
                total_len += ft_print_char('%'); 
                total_len += ft_print_char(*format);
				if (*(++format) == '%' )
					return (total_len += ft_print_char('%'));
            }			
		}
		else
			total_len += ft_print_char(*format);
		format++;
	}
	return total_len;
}
