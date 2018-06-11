#include <ft_printf.h>

void	conv_MajU(t_flag *flags, t_print *print)
{
	BINARY |= (BINARY & FLAG_L == FLAG_L) ? FLAG_LL : FLAG_L;
	TYPE = '9';
	conv_u(flags,print);
}