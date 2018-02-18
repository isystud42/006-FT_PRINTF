#include <stdio.h>
#include "includes/ft_printf.h"

int main(int argc, char **argv)
{
	t_flag		*flags;

	flags = ft_struct_init();
	ft_parse_flags("hl -",flags);
	printf("TYPE contient %d.\n", TYPE);
	printf("BINARY contient %d.", BINARY);


	// printf("Here is a test - %hh","Foo bar Boo Far");
	return (0);	
}