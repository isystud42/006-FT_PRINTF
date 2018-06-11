#include <ft_printf.h>

void    do_hash(t_flag *flags, t_print* print)
{
    if (BINARY & FLAG_HASH)
    {
        if (TYPE == 7)
            add_to_buffer('0', print);
        else if (TYPE == 12)
        {
            add_to_buffer('0', print);
            add_to_buffer('X', print);
        }
        else if (TYPE == 11)
        {
            add_to_buffer('0', print);
            add_to_buffer('x', print);
        }
    }
}

void    do_plus_and_space(t_flag *flags, t_print* print, int foo)
{
    if (!foo)
        add_to_buffer('-', print);
    else if (BINARY & FLAG_PLUS)
        add_to_buffer('+', print);
    else if (BINARY & FLAG_SPACE)
        add_to_buffer(' ', print); 
}

void    do_mini_field_width(t_flag *flags, t_print* print, int mini)
{
    while (mini > 0)
    {
        mini--;
        add_to_buffer(BINARY & FLAG_ZERO ? '0' : ' ', print)
    }
}

void    do_precision(t_flag *flags, t_print* print, int len)
{
    while ((PRECISION - len) > 0)
    {
        add_to_buffer('0', print);
        PRECISION--;
    }
}

void    do_num_prec(t_flag *flags, t_print* print, int len)
{
}