/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalona <yalona@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 14:37:26 by yalona            #+#    #+#             */
/*   Updated: 2020/09/11 16:32:34 by yalona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_print *initializ(t_print *print)
{
  print->len = 0;
  print->i = 0;
  print->transform = "scSCdDiuUoOxXbp%";
  print->modifier = "-+ 0#";
  print->flags = "lhjz";
  print->f_treat = (char *)print->format;
  print->f_copy = (char *)print->format;
  return(print);
}