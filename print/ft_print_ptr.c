/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 02:41:32 by adylewsk          #+#    #+#             */
/*   Updated: 2021/02/04 19:16:34 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libftprintf.h"

int	ft_print_ptr(t_param *param, char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (ft_strlen(str) <= 1 && *str == '0')
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
	i += ft_reput('0', param->precision - ft_strlen(str));
	while (*str)
	{
		ft_putchar(*str);
		str++;
		i++;
	}
	param->champ -= i;
	return (i);
}
