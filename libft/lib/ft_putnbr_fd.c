#include <unistd.h>
#include "libft.h"

int	ft_log10(int n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_pow10(int pow)
{
	int	n;

	n = 10;
	if (pow == 0)
	{
		n = 1;
	}
	while (pow > 1)
	{
		n = n * 10;
		pow--;
	}
	return (n);
}

void	ft_nbr_fd(int n, int fd)
{
	int	nbr;

	while (n > 9)
	{
		nbr = (n / ft_pow10(ft_log10(n))) + 48;
		write(fd, &nbr, 1);
		n = n - ((n / ft_pow10(ft_log10(n))) * ft_pow10(ft_log10(n)));
	}
	if (n < 10)
	{
		n = n + 48;
		write(fd, &n, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			write(fd, "2", 1);
			n = n + 2000000000;
		}
		n = n * -1;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		ft_nbr_fd(n, fd);
	}
}
