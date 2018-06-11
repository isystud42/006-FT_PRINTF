#include <stdio.h>
#include "../includes/ft_printf.h"

int main(int argc, char **argv)
{
	t_flag		*flags;
	char		*s;

	flags = ft_struct_init();
	ft_parse_flags("#0 +-1234567809.12s",flags);
	printf("TYPE contient %d.\n", TYPE);
	printf("BINARY contient %d.\n", BINARY);
	printf("PRECISION contient %d.\n", PRECISION);
	printf("FIELD contient %d.\n", FIELD);
	return (0);
}

// #include <ft_printf.h>
// #include <stdio.h>
// #include <locale.h>

// #define STRING "lolmdr%0hhd"

// #define ARG1 11

// int main(void)
// {
// 	int ret;
// 	int *exemple;
// 	//	int		tab[5] = {, 1, 35, 60000};

// 	exemple = &ret;
// 	setlocale(LC_ALL, "");

// 	ret = 0;
// 	ret = ft_printf(STRING, ARG1);
// 	printf("\033[1;34m<-ft_printf\033[0m\nft_printf (ret) :");
// 	printf("\t\033[1;31m%d\033[0m\n", ret);

// 	printf("-----------------------------------\n");

// 	ret = printf(STRING, ARG1);
// 	printf("\033[1;34m<-printf\033[0m\nprintf (ret)");
// 	printf("\t\t\033[1;31m%d\033[0m\n", ret);
// 	printf("-----------------------------------\n");
// 	return (0);
// }
