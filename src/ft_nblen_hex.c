#include "../inc/libft.h"

uint8_t	ft_nblen_hex(int nb)
{
	uint8_t	res = 0;

	if (nb < 0)
		return (8);
	else if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 16;
		res++;
	}
	return res;
}