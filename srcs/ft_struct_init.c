#include <ft_printf.h>

t_flag		*ft_struct_init(void)
{
	t_flag	*flags;

	if (!(flags = malloc(sizeof(t_flag))))
		return (NULL);
	TYPE = 0;
	FIELD = 0;
	BINARY = 0;
	PRECISION = 0;
	return (flags);
}