#include "libft.h"

unsigned char	*ft_strchar(unsigned char c, unsigned char *old)
{
	unsigned char	*new;

	new = malloc(sizeof(old) * (ft_strlen((char *)old) + 1));
	ft_strcpy((char *)new, (char *)old);
	new[ft_strlen((char *)old)] = c;
	if (old)
		free(old);
	return (new);
}