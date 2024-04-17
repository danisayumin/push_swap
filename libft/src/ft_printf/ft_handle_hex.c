/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielasayuminitta <danielasayuminitta@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:46:10 by danielasayu       #+#    #+#             */
/*   Updated: 2024/04/15 16:46:13 by danielasayu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	ft_handle_hexlower(va_list ap)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	return (ft_putnbr_base(n, "0123456789abcdef"));
}

int	ft_handle_hexupper(va_list ap)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	return (ft_putnbr_base(n, "0123456789ABCDEF"));
}
