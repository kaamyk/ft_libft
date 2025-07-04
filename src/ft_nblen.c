#include "../inc/libft.h"

uint8_t	ft_nblen(int nb)
{
	int		len = 0;
	long	n = nb;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
