#include <libft.h>

int		deb(int line, char *file)
{
	ft_putstr("\033[1;31mFILE{\033[1;33m");
	ft_putstr(file);
	ft_putstr("\033[1;31m} LINE{\033[1;33m");
	ft_putnbr(line);
	ft_putstr("\033[1;31m}\033[0m\n");
	return (1);
}