/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <sramasam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 07:16:00 by sramasam          #+#    #+#             */
/*   Updated: 2025/06/28 10:58:08 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int ft_check_con(va_list args, char c)
{
    int count;

    count = 0;
    if (c == 'c')
    count = ft_putchar_fd(va_arg(args, char));
    else if (c == 's')
    count = ft_putstr_fd(va_arg(args, char *));
    
}