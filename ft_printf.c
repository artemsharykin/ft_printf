/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalona <yalona@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:26:05 by yalona            #+#    #+#             */
/*   Updated: 2020/10/15 17:38:12 by yalona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int  printf(const char * format, ...)
{
  t_print *f;
  if (!(f = (t_print *)malloc(sizeof(t_print)))) // выделяем память для f
    return (-1);
  f->format = format;
  f = initilize(f);  // передаем в функцию инициализации
  if (format)
  {
    va_start(f->args, format);  
    f->len = parse(f); // передаем в функцию парсинга
    va_end(f->args);
  }
  free(f);
  return (f->len);
}

t_print *initialize(t_print *f) // задает базовые значения 
{
  f->len = 0;
  f->i = 0;
  f->f_treat = (char *)f->format;
  f->f_cpy = (char *)f->format;
  return (f);
}

int parse(t_print *f) // функция для разобра строки
{
  if (ft_strcmp(f->f_cpy, "%") == 0) // првоерка что строка состоит не только из %
    return (0);
  while (f->f_cpy[f->i] != '\0')
  {
    if (f->f_cpy[f->i] == '%')
    {
      
    }
  }
  
}
