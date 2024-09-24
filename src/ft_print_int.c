/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoryan <igoryan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:11:05 by igoryan           #+#    #+#             */
/*   Updated: 2024/09/24 19:18:21 by igoryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_print_int(int n)
{
    int count;
    char    *result;

    result = ft_itoa(n);
    count += ft_print_str(result);
    free(result);
    return (count);
}