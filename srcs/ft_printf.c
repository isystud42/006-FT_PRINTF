#include <ft_printf.h>

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	t_flag		*flags;
	int			i;
	int			ret;
	char		*copied_format;

	i = 0;
	ret = 0;
	va_start(ap,format);
	flags = ft_struct_init();
	copied_format = (char *)format;
	while (copied_format[i])
	{
		if (copied_format[i] == '%')
		{
			write(1,format,i);
			copied_format += i + 1;
			ret += i;
			i = 0;
			ft_parse_flags(copied_format, flags);
			ft_call_function(flags,ap);		
		}
		i++;
	}
	va_end(ap);
	return (ret);
}