#include <ft_printf.h>

static struct s_s  g_s[15] = {
    {1, &ft_s_output},
    {2, &ft_MajD_output},
    {3, &ft_p_output},
    {4, &ft_d_output},
    {5, &ft_MajD_output},
    {6, &ft_ft_i_output},
    {7, &ft_o_output},
    {8, &ft_MajO_output},
    {9, &ft_u_output},
    {10, &ft_MajU_output},
    {11, &ft_x_output},
    {12, &ft_MajX_output},
    {13, &ft_c_output},
    {14, &ft_MajC_output},
    {0, NULL}
};

int     ft_call_function(t_flag *flags, char **format)
{
    int     ret;
    int     i;
    va_list

    i = 0;
    while (g_s[i].type)
    {
        if (g_s[i].type == TYPE)
            return (g_s[i].f(flags, format));
        i++;
    }
/*
    ret = (TYPE == 1) ? ft_s_output(flag, format) : 0;
    ret = (TYPE == 3) ? ft_p_output(flag, format) : 0;
    ret = (TYPE == 4) ? ft_d_output(flag, format) : 0;
    ret = (TYPE == 6) ? ft_i_output(flag, format) : 0;
    ret = (TYPE == 7) ? ft_o_output(flag, format) : 0;
    ret = (TYPE == 9) ? ft_u_output(flag, format) : 0;
    ret = (TYPE == 11) ? ft_x_output(flag, format) : 0;
    ret = (TYPE == 13) ? ft_c_output(flag, format) : 0;
    ret = (TYPE == 2) ? ft_MajS_output(flag, format) : 0;
    ret = (TYPE == 5) ? ft_MajD_output(flag, format) : 0;
    ret = (TYPE == 8) ? ft_MajO_output(flag, format) : 0;
    ret = (TYPE == 10) ? ft_MajU_output(flag, format) : 0;
    ret = (TYPE == 12) ? ft_MajX_output(flag, format) : 0;
    ret = (TYPE == 14) ? ft_MajC_output(flag, format) : 0;
*/}