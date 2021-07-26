#include "libft.h"

static void	space_skip(const char *str, int *i)
{
	while (((str[*i] >= 9 && str[*i] <= 13)
			|| str[*i] == 32) && str[*i] != '\0')
		*i = *i + 1;
}

static void	is_minus(const char *str, int *minus, int *i)
{
	if (str[*i] == '-')
	{
		*minus = 1;
		*i = *i + 1;
	}
	else if (str[*i] == '+')
		*i = *i + 1;
}

int	ft_atoi(const char *str)
{
	unsigned long	sum;
	int				minus;
	int				i;

	i = 0;
	sum = 0;
	minus = 0;
	space_skip(str, &i);
	is_minus(str, &minus, &i);
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		sum += str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			sum *= 10;
		i++;
	}
	if (sum >= (unsigned long)LONG_MAX && minus != 1)
		return (-1);
	else if ((sum > (unsigned long)LONG_MAX) && minus == 1)
		return (0);
	if (minus == 1)
		return ((int)sum * -1);
	return ((int)sum);
}
