#include <stdio.h>
#include "../lib/libft.h"

int	 main (void)
{
	char	c;
	char	*s;
	int		nA;
	int		n1;
	int		n_int_max;
	int		n_int_min;

	c = 'd';
	s = ">This is a string";
	nA = 65;
	n1 = 49;
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

	printf("\nTEST -- ft_isalpha (int c)");
	printf("\nThis is ft_isalpha as c = 75 and it should be 1:%d", ft_isalpha(75));
	printf("\nThis is ft_isalpha as c = 50 and it should be 0:%d", ft_isalpha(50));

	printf("\nTEST -- ft_isalnum (int c)");
	printf("\nThis is ft_isalnum as c = 75 and it should be 1:%d", ft_isalnum(75));
	printf("\nThis is ft_isalnum as c = 50 and it should be 1:%d", ft_isalnum(50));

	printf("\nTEST -- ft_isascii (int c)");
	printf("\nThis is ft_isascii as c = 75 and it should be 1:%d", ft_isascii(75));
	printf("\nThis is ft_isascii as c = 50 and it should be 1:%d", ft_isascii(50));

	printf("\nTEST -- ft_isprint (int c)");
	printf("\nThis is ft_isprint as c = 75 and it should be 1:%d", ft_isprint(75));
	printf("\nThis is ft_isprint as c = 50 and it should be 1:%d", ft_isprint(50));


	
	ft_toupper (int c)\nft_tolower (int c)");

	return 0;
}