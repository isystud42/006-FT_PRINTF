#include <ft_printf.h>

void	ft_get_field_size(char **format, t_flag *flags)
{
	FIELD = ft_atoi(*format);
	while (ft_strchr("0123456789", **format))
		++*format;
}

void	ft_get_precision(char **format, t_flag *flags)
{
	++*format;
	PRECISION = ft_atoi(*format);
	while (ft_strchr("0123456789", **format))
		++*format;
}

void    ft_flags_to_binary(char **format, t_flag *flags)
{
	BINARY |= (**format == '0') ? FLAG_ZERO : 0;
	BINARY |= (**format == '+') ? FLAG_PLUS : 0;
	BINARY |= (**format == '-') ? FLAG_MINUS : 0;
	BINARY |= (**format == ' ') ? FLAG_SPACE : 0;
	BINARY |= (**format == '#') ? FLAG_HASH : 0;
	BINARY |= (**format == 'h' && *(*format + 1) != 'h') ? FLAG_H : 0;
	BINARY |= (**format == 'h' && *(*format + 1) == 'h' && ++*format) ? FLAG_HH : 0;
	BINARY |= (**format == 'l' && *(*format + 1) != 'l') ? FLAG_L : 0;
	BINARY |= (**format == 'l' && *(*format + 1) == 'l' && ++*format) ? FLAG_LL : 0;
	BINARY |= (**format == 'j') ? FLAG_J : 0;
	BINARY |= (**format == 'z') ? FLAG_Z : 0;
	++*format;
}

void	ft_type_stockage(char **format, t_flag *flags)
{
	TYPE = (**format == 's') ? 1 : TYPE;
	TYPE = (**format == 'S') ? 2 : TYPE;
	TYPE = (**format == 'p') ? 3 : TYPE;
	TYPE = (**format == 'd') ? 4 : TYPE;
	TYPE = (**format == 'D') ? 5 : TYPE;
	TYPE = (**format == 'i') ? 6 : TYPE;
	TYPE = (**format == 'o') ? 7 : TYPE;
	TYPE = (**format == 'O') ? 8 : TYPE;
	TYPE = (**format == 'u') ? 9 : TYPE;
	TYPE = (**format == 'U') ? 10 : TYPE;
	TYPE = (**format == 'x') ? 11 : TYPE;
	TYPE = (**format == 'X') ? 12 : TYPE;
	TYPE = (**format == 'c') ? 13 : TYPE;
	TYPE = (**format == 'C') ? 14 : TYPE;
	++*format;
}

int			ft_parse_flags(char **format, t_flag *flags)
{
	while (ft_strchr("#0 +-", **format))
		ft_flags_to_binary(format, flags);
	if (ft_strchr("123456789", **format))
		ft_get_field_size(format, flags);
	if (ft_strchr(".", **format))
		ft_get_precision(format, flags);
	if (ft_strchr("hljz", **format))
		ft_flags_to_binary(format, flags);
	ft_type_stockage(format, flags);
	return (0);
}