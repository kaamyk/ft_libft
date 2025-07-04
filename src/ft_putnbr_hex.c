#include "../inc/libft.h"

int	ft_putnbr_hex(int n, bool maj)
{
	const char	base_M[16] = "0123456789ABCDEF";
	const char	base_m[16] = "0123456789abcdef";
	int		ret = 0;
	bool	print = (n < 0) & 1;
	char	to_print = 0;

	for (int i = 7; i >= 0; i--)
	{
		if (maj)
			to_print = base_M[(n >> (i * 4)) & 0x0f];
		else
			to_print = base_m[(n >> (i * 4)) & 0x0f];
		if (print == 0)
		{
			if (to_print == '0' && i > 0)
				continue ;
			print = 1;
		}
		ret += write(STDOUT_FILENO, &to_print, 1);
	}
	return (ret);
}