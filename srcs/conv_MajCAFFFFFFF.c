# include <ft_printf.h>

void	conv_MajC(t_flag *flags, t_print *print)
{
	wchar_t		c;
	size_t		bits;

	c = get_unicode_param(TYPE,AP);
	bits = *fonction de lenght of bits*;
	if (!BINARY & FLAG_MINUS)
		do_mini_field_width(flags,print,FIELD-1);
	do_add_unicode(c,print)
	if (BINARY & FLAG_MINUS)
		do_mini_field_width(flags,print,FIELD);
}