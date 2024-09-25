/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <ibondarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:48:14 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/25 13:34:15 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*f;
	int			total_len;

	va_start(args, format);
	f = format;
	total_len = 0;
	while (*f)
	{
		if (*f == '%')
		{
			f++;
			total_len += ft_hendle_args(args, *f);
		}
		else
		{
			total_len += ft_print_char(*f);
		}
		f++;
	}
	va_end(args);
	return (total_len);
}
