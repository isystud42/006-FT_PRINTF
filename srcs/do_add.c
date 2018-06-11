#include <ft_printf.h>

void    add_to_buffer(char c, t_print *print)
{
    if (POS == BUFF_SIZE)
    {
        write(FD, BUFF, BUFF_SIZE);
        POS = 0;
    }
    BUF[POS] = c;
    POS += 1;
    /*
    **  Ans ?
    */ 
    T_FLAGS->FIELD -= 1;
}