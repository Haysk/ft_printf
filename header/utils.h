/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:46:10 by adylewsk          #+#    #+#             */
/*   Updated: 2021/01/28 18:27:43 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(const char *str);
int		ft_tolower(int c);
int		ft_max(int a, int b);
int		ft_min(int a, int b);
int		ft_putchar(char c);
int		ft_putstr(char *str);
void	*ft_calloc(size_t count, size_t size);

#endif
