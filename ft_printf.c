#include "includes/ft_printf.h"
#include <stdarg.h>

int		printf(const char * restrict format, ...)
{
	va_list		ap;
	t_flag		*flags;
    char		*copied_format;
	int			i;
	int			ret;

	va_start(ap,format);
	copied_format = format;
	while (copied_format)
	{
		i = 0;
		if (copied_format[i] == '%')
		{
			write(1,copied_format,i);
			copied_format += i + 1;
			ret += i;
			i = 0;
			ft_parse_flags(copied_format,flags);
		
			...
		
		}
	}
	va_end(ap);
	return (ret);
}



//Ce qu'on parse c'est ce qui vient a partir du % histoire de connaitre l'indicateur de conversion et de segmenter cette partie puis l'envoyer dans la fonction de traitement
//La fonction de parse aura aussi pour role de stocker les flags dans une structure quand possible histoire de preparer le terrain pour la suite.