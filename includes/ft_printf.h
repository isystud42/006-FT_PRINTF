#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# define FLAG_ZERO  0x0001
# define FLAG_PLUS  0x0002
# define FLAG_MINUS 0x0004
# define FLAG_SPACE 0x0008
# define FLAG_HASH  0x0010
# define FLAG_HH    0x0020
# define FLAG_H     0x0040
# define FLAG_L     0x0080
# define FLAG_LL    0x0100
# define FLAG_J     0x0200
# define FLAG_Z     0x0400

typedef struct  s_flag
{
    int type;
    int binary_flags;
    int precision;
    int minimal_field_size;
}               t_flag;

# define BINARY     flags->binary_flags
# define PRECISION  flags->precision
# define FIELD      flags->minimal_field_size
# define TYPE       flags->type

int		    ft_parse_flags(char *copied_format, t_flag *flags);
t_flag		*ft_struct_init(void);

#endif