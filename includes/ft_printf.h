#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <libft.h>
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

# define NO_HLJZ	0x001F
# define ALL_HLJZ   0x07E0    

# define T_INT		9
# define T_SHORT	10
# define T_CHAR		11
# define T_LONG		12
# define T_LLONG	13
# define T_MAX		14
# define T_SIZE		15

# define T_UINT		17
# define T_USHORT	18
# define T_UCHAR	19
# define T_ULONG	20
# define T_ULLONG	21
# define T_UMAX		22
# define T_USIZE	23

typedef struct  s_flag
{
    int type;
    int binary_flags;
    int precision;
    int minimal_field_size;
}               t_flag;

typedef struct  s_print
{
    int     pos;
	int		fd;
	int		buf;
    va_list ap;
    t_flag  *flags;
}              t_print;

struct  s_s
{
    int     type;
    void    (*f)(t_flag *, va_list);
}

# define BINARY     flags->binary_flags
# define PRECISION  flags->precision
# define FIELD      flags->minimal_field_size
# define TYPE       flags->type

# define FD			print->fd
# define POS		print->pos
# define BUFF		print->buf
# define T_FLAGS	print->flags
# define AP         print->ap


int		    ft_parse_flags(char *copied_format, t_flag *flags);
int         ft_call_function(t_flag *flags);
t_flag		*ft_struct_init(void);
int		    ft_printf(const char *format, ...);

#endif  