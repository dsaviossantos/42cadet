#include "libft.h"

void	ft_putnbr(int nb)
{
	char	tmp;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = 147483648;
		}
		else
		{
			nb *= -1;
		}
	}
	if (nb < 10)
	{
		tmp = nb + '0';
		write(1, &tmp, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
