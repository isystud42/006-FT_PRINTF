#include "includes/ft_printf.h"

t_flag		*ft_struct_init(void)
{
	t_flag	*flags;

	flags = malloc(sizeof(t_flag));
	TYPE = 0;
	FIELD = 0;
	BINARY = 0;
	PRECISION = 0;
	return (flags);
}

int		ft_type_stockage(char *tmp, t_flag *flags)
{
	TYPE = (*tmp == 's') ? 1 : TYPE;
	TYPE = (*tmp == 'S') ? 2 : TYPE;
	TYPE = (*tmp == 'p') ? 3 : TYPE;
	TYPE = (*tmp == 'd') ? 4 : TYPE;
	TYPE = (*tmp == 'D') ? 5 : TYPE;
	TYPE = (*tmp == 'i') ? 6 : TYPE;
	TYPE = (*tmp == 'o') ? 7 : TYPE;
	TYPE = (*tmp == 'O') ? 8 : TYPE;
	TYPE = (*tmp == 'u') ? 9 : TYPE;
	TYPE = (*tmp == 'U') ? 10 : TYPE;
	TYPE = (*tmp == 'x') ? 11 : TYPE;
	TYPE = (*tmp == 'X') ? 12 : TYPE;
	TYPE = (*tmp == 'c') ? 13 : TYPE;
	TYPE = (*tmp == 'C') ? 14 : TYPE;
	return (0);
}

int     ft_flags_to_binary(char *tmp, t_flag *flags)
{
	char	*copy;

	copy = tmp;
	BINARY |= (*tmp == '0') ? FLAG_ZERO : 0;
	BINARY |= (*tmp == '+') ? FLAG_PLUS : 0;
	BINARY |= (*tmp == '-') ? FLAG_MINUS : 0;
	BINARY |= (*tmp == ' ') ? FLAG_SPACE : 0;
	BINARY |= (*tmp == '#') ? FLAG_HASH : 0;
	BINARY |= (*tmp == 'h') ? FLAG_H : 0;
	BINARY |= (*tmp == 'l') ? FLAG_L : 0;
	BINARY |= (*tmp == 'j') ? FLAG_J : 0;
	BINARY |= (*tmp == 'z') ? FLAG_Z : 0;
	copy += (*copy == 'h' || *copy == 'l') ? 1 : 0;
	if (copy)
	{
		BINARY |= (*copy == 'h' && *tmp == 'h') ? (FLAG_HH) : 0;
		BINARY |= (*copy == 'l' && *tmp == 'l') ? (FLAG_LL) : 0;
	}
	return (0);
}

int		ft_parse_flags(char *copied_format, t_flag *flags)
{
	char	*tmp;

	tmp = copied_format;
	while(tmp && !ft_strchr("%sSpdDioOuUxXcC",*tmp))
	{
		if (ft_strchr(". 0+-# h hh l ll j z",*tmp))
		{	
			ft_flags_to_binary(tmp, flags);
			tmp++;
		}
		else
		{
			break;
		}
	}
	ft_type_stockage(tmp, flags);
	printf("Deuxieme passage, TYPE = %d\n", TYPE);
	return (0);
}