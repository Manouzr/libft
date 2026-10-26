#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			buf[10];
	unsigned int	nb;
	int				i;

	nb = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	i = 10;
	while (i == 10 || nb > 0)
	{
		i--;
		buf[i] = (char)('0' + nb % 10);
		nb /= 10;
	}
	write(fd, buf + i, 10 - i);
}
