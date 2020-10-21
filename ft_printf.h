/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalona <yalona@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:26:39 by yalona            #+#    #+#             */
/*   Updated: 2020/10/15 17:15:04 by yalona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include "libft/libft.h"

#define FLAGS "-+#0"                           // опредяем флаги 
#define SPECIFER "cspdiouUxXf%Z"               // определяем спецификаторы 
#define MODIFICATOR "lhjz"                     // определяем модификаторы
//# define NEEDED "#0-+ cspdiouUxXf%Z.123456789lhLjz*"
//# define BIG_BUFF 60000

typedef struct s_print
{
  int i;
  const char *format;
  va_list		args;
  int len;
  char		*f_cpy;
	char		*f_treat;
  
}              t_print;

int  printf(const char * format, ...);
t_print *initialize(t_print *f);
int parse(t_print *f);

#endif