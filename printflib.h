/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <sramasam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 19:19:36 by sramasam          #+#    #+#             */
/*   Updated: 2025/06/28 10:26:19 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFLIB_H
# define PRINTFLIB_H

# define HEXA_UPPER "0123456789ABCDEF"
# define HEXA_LOWER "0123456789abcdef"

# include "Libft/libft.h"

void	ft_putunbr_fd(unsigned int n, int fd);
void	ft_printhexa_upper(unsigned int n);
void	ft_printhexa_lower(unsigned int n);
void	ft_ptraddress(unsigned long n);

#endif
