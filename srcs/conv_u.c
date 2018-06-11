#include <ft_printf.h>

void	conv_u(t_flag *flags, t_print *print)
{
	uintmax_t	foo;

	foo = get_uparam(flags,print);
	if (foo || PRECISION)
	{
		if (!(BINARY & FLAG_MINUS))
			do_mini_field_width(flags,print,PRECISION- 
			(ft_is_bigger(PRECISION,(int)baselen(foo,10))));
		do_num_prec(flags,print,((int)baselen(foo,10)));
		uitoabasecustom(foo,"0123456789",print,((int)baselen(foo,10)));
		if (BINARY & FLAG_MINUS)
			do_mini_field_width(flags,print,PRECISION);
	}
}