/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hendle_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:23:31 by igoryan           #+#    #+#             */
/*   Updated: 2024/09/23 22:31:03 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_hendle_args(va_list args, char format)
{
    int count;
    
    count = 0;
    if (format == 'c')
        count += ft_putchar(va_arg(args, int));
    else if (format == 's')
        count += ft_putstr(va_arg(args, char*));
    return (count);
}