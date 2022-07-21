//
// Created by jiyun on 2022/07/20.
//

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

void    print_char(char c, int *print_byte);
void    print_str(char *s, int *print_byte);
char    *check_base(char type);
void    print_nbr_base(unsigned long nbr, char *base, int notation, int *print_byte);
void    print_nbr(char type, unsigned long nbr, int *print_type);
void    convert_to(char type, va_list arg_ptr, int *print_byte);
int     is_valid_format(const char *format);
int     ft_printf(const char *format, ... );

#endif
