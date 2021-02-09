/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 02:41:32 by adylewsk          #+#    #+#             */
/*   Updated: 2021/02/04 18:18:11 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libftprintf.h"

int	ft_print_ptr(t_param *param, char *str)
{
	int	i;
	int	str_len;

	i = 0;
	str_len = ft_strlen(str);
	if (!str)
		return (0);
	if (str_len <= 1 && *str == '0')
	{
		if (param->precision < 0)
		{
			i = ft_putstr(str);
			param->champ -= i;
			return (i);
		}
		i += ft_reput('0', param->precision);
		return (i);
	}
	i += ft_reput('0', param->precision - str_len);
	while (i < ft_max(str_len, param->precision) && *str)
	{
		ft_putchar(*str);
		str++;
		i++;
	}
	param->champ -= i;
	return (i);
}
