/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielasayuminitta <danielasayuminitta@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:46:45 by danielasayu       #+#    #+#             */
/*   Updated: 2024/04/15 16:46:47 by danielasayu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	ft_handle_pointer(va_list ap)
{
	void	*n;

	n = va_arg(ap, void *);
	write(1, "0x", 2);
	return (ft_putnbr_base((unsigned long long)n, "0123456789abcdef") + 2);
}
