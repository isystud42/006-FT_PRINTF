#include <ft_printf.h>

/*
**	conv_c est la fonction appliquée quand l'indacateur de conversion est
**	%c. Le flag %c parmet d'afficher un caractere/un caractere special grace
**	au flag l
**
**	Si on a %lc, on passe directement sur son equivalent -> MajC qui 
**	gère l'unicode
*/

void     conv_c(t_flag *flags, t_print *print)
{
	unsigned char	c;

	if (BINARY & FLAG_L || BINARY & FLAG_LL)
	{
		TYPE = 14;
		conv_MajC(flags,print,format);
	}
	else
	{
		c = get_param(BINARY, AP);
		if (!BINARY & FLAG_MINUS)
			do_mini_field_width(flags,print,FIELD-1);
		do_add(c,print);
		if (BINARY & FLAG_MINUS)
			do_mini_field_width(flags,print,FIELD);
	}
}