/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 01:27:35 by adylewsk          #+#    #+#             */
/*   Updated: 2021/02/03 04:18:30 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libftprintf.h"

int	ft_print_str(t_param *param, char *str)
{
	int	i;

	i = 0;
	if (param->convert == 'c')
	{
		i = ft_putchar(*str);
		param->champ -= i;
		return (i);
	}
	if (!*str)
		return (0);
	if (param->precision < 0)
	{
		i = ft_putstr(str);
		param->champ -= i;
		return (i);
	}
	while (i < param->precision && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	param->champ -= i;
	return (i);
}
