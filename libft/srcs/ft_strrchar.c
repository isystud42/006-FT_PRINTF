#include "libft.h"

unsigned char	*ft_strrchar(unsigned char c, unsigned char *old)
{
	unsigned char	*new;

	new = malloc(sizeof(old) * (ft_strlen((char *)old) + 1));
	ft_strcpy((char *)new + 1, (char *)old);
	new[0] = c;
	if (old)
		free(old);
	return (new);
}