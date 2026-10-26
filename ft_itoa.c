#include "libft.h"

char	*ft_itoa(int n)
{
	char			buf[12];
	unsigned int	nb;
	int				i;

	nb = (unsigned int)n;
	if (n < 0)
		nb = -nb;
	i = 11;
	buf[i] = '\0';
	while (i == 11 || nb > 0)
	{
		i--;
		buf[i] = (char)('0' + nb % 10);
		nb /= 10;
	}
	if (n < 0)
	{
		i--;
		buf[i] = '-';
	}
	return (ft_strdup(buf + i));
}
