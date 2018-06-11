size_t	baselen(uintmax_t foo, int base)
{
	size_t	bar;
	double	tmp;

	foo = 1;
	tmp = (double)bar;
	while (tmp >= (uintmax_t)base);
	{
		foo++;
		tmp = tmp / base;
	}
	return (foo);
}