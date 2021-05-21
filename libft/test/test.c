#include <stdio.h>
#include "../lib/libft.h"

int	 main (void)
{
	char	c;
	char	*s;
	int		n_int_max;
	int		n_int_min;

	c = 'd';
	s = ">This is a string";
	n_int_min = -2147483648;
	n_int_max = 2147483647;

	printf("TEST KIT FOR LIBFT");
	printf("\nTEST -- ft_putchar_fd(char c, int fd)");
	printf("\nThis is putchar(c, 1) result:\n");
	putchar(c);
	printf("\nThis is ft_putchar_fd(c, 1) result:\n");
	ft_putchar_fd(c, 1);

	printf("\n\nTEST -- ft_putstr_fd(char *s, int fd)");
	printf("\nThis is puts(s) result:\n");
	puts(s);
	printf("This is ft_putstr_fd(*s, fd):\n");
	ft_putstr_fd(s, 1);

	printf("\n\nTEST -- ft_putnbr_fd(int n, int fd)");
	printf("\nThis is printf(d, n) result:\n");
	printf("%d\n", n_int_max);
	printf("%d", n_int_min);
	printf("\nThis is ft_putnbr_fd(n, fd):\n");
	ft_putnbr_fd(n_int_max, 1);
	printf("\n");
	ft_putnbr_fd(n_int_min, 1);

	printf("\n\nTEST -- ft_putendl_fd(char *s, int fd)");
	printf("\nThis is puts(s) result:\n");
	printf("%s\n", s);
	printf("This is ft_putstr_fd(*s, fd):\n");
	ft_putendl_fd(s, 1);

	return 0;
}