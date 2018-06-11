	#include <ft_printf.h>

/*
0**  le principe de ce ioabase, est similaire au itoa base classique
**  avec l'avantage de permettre unee base customisée, rendant ainsi 
**  le itoa plus fonctionel et plus pratique.
**
**  on commence par estimer la taille de la nouvelle base.
**
*/

void uitoabasecustom(uintmax_t foo, char *base, t_print *print, size_t bar)
{
	size_t  lenbase;
	char    str[50];

	lenbase = ft_strlen(base);
	str[bar + 1] = 0;
	while (bar--)
	{
		str[bar] = base[foo % lenbase];
		foo /= lenbase;
	}
	while (str[bar])
	{
		do_add(str[bar], print);
		bar++;
	}
}