#include <ft_printf.h>

intmax_t    get_param(int type, va_list ap)
{
	type = (BINARY & ALL_HLJZ <= NO_HLJZ) ? return ((intmax_t)va_arg(ap,int)) : type;
	type = (BINARY & FLAG_HH) ? return ((intmax_t)(char)va_arg(ap,int)) : type;
	type = (BINARY & FLAG_H) ? return ((intmax_t)(short)va_arg(ap,int)) : type;
	type = (BINARY & FLAG_L) ? return ((intmax_t)va_arg(ap,long)) : type;
	type = (BINARY & FLAG_LL) ? return ((intmax_t)va_arg(ap,long long)) : type;
	type = (BINARY & FLAG_J) ? return (va_arg(ap,intmax_t));
	type = (BINARY & FLAG_Z) ? return ((intmax_t)va_arg(ap,size_t));
	return ((intmax_t)-1);
}

uintmax_t	get_uparam(int type, va_list ap)
{
	type = (BINARY & ALL_HLJZ <= NO_HLJZ) return ((uintmax_t)va_arg(ap,unsigned int)) : type;
	type = (BINARY & FLAG_HH) ? return ((uintmax_t)(unsigned char)va_arg(ap,unsigned int)) : type;
	type = (BINARY & FLAG_H) ? return ((uintmax_t)(unsigned short)va_arg(ap,unsigned int)) : type;
	type = (BINARY & FLAG_L) ? return ((uintmax_t)va_arg(ap,unsigned long)) : type;
	type = (BINARY & FLAG_LL) ? return ((uintmax_t)va_arg(ap,unsigned long long)) : type;
	type = (BINARY & FLAG_J) ? return (va_arg(ap,uintmax_t));
	type = (BINARY & FLAG_Z) ? return ((uintmax_t)va_arg(ap,size_t));
	return ((uintmax_t)-1);
}