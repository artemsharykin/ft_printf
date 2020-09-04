/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalona <yalona@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 14:44:02 by yalona            #+#    #+#             */
/*   Updated: 2020/09/04 15:40:49 by yalona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"


int printf(const char *format, ...)
{
  t_print *print;
  if (!(print = (t_print*)malloc(sizeof(t_print))))
    return (-1);
  print->format = format;
  //print = analysis(print);
  if (format)
  {
    va_start(print->args, format);
    //print->len = parse(print);
    va_end(print->args);
  }
  free(print);
  return(0);
}

int main(void)
{
  int a = 9;
  printf("%d\n", a);
  return(0);
}
