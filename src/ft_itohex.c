#include "../inc/libft.h"

#include <stdio.h>
char	*ft_itohex(int n, bool maj)
{
	bool	write = (n < 0) & 1;
	const char	base_M[16] = "0123456789ABCDEF";
	const char	base_m[16] = "0123456789abcdef";
	char to_write = 0;
	char	*res = NULL;
	uint8_t ctr = 0;

	res = ft_calloc(ft_nblen_hex(n) + 1, sizeof(char));
	if (!res)
		return (NULL);
	for (int i = 7; i >= 0; i--)
	{
		if (maj)
			to_write = base_M[(n >> (i * 4)) & 0x0f];
		else
			to_write = base_m[(n >> (i * 4)) & 0x0f];
		if (write == 0)
		{
			if (to_write == '0' && i > 0)
				continue ;
			write = 1;
		}
		res[ctr++] = to_write;
	}
	return (res);
}