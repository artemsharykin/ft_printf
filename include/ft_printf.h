/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalona <yalona@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 14:44:32 by yalona            #+#    #+#             */
/*   Updated: 2020/09/11 16:36:46 by yalona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "../libft/libft.h"
# include <stdarg.h>
# include <ctype.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>


typedef struct  s_print
{
    va_list args;
    const char *format;
    int len;
    int i;
    const char *transform;
    const char *modifier;
    const char *flags;
    char		*f_copy;
	char		*f_treat;




}               t_print;

int printf(const char *format, ...);
t_print *initializ(t_print *print);
#endif