#include "../lib/libft.h"

int	 main (void)
{
	char	c;
	char	*s;
	char	*s1;
	char	str_buffer[42];
	int		ascii_A;
	int		ascii_lowerA;
	int		ascii_one;
	int		ascii_tab;
	int		ascii_none;
	int		n_int_max;
	int		n_int_min;

	c = 'd';
	s = "This is a string";
	s1 = " concatenated with this string";
	ascii_A = 65;
	ascii_lowerA = 97;
	ascii_one = 49;
	ascii_tab = 38;
	ascii_none = 3;
	n_int_min = -2147483648;
	n_int_max = 2147483647;

	printf("\033[1;36m ================== TEST KIT FOR LIBFT ====================\033[0m");
	printf("\n\t\033[1;35mTEST -- ft_putchar_fd(char c, int fd)\033[0m");
	printf("\n\tThis is putchar(c, 1) result:\n");
	putchar(c);
	printf("\nThis is ft_putchar_fd(c, 1) result:\n");
	ft_putchar_fd(c, 1);

	printf("\n\n\t\033[1;35mTEST -- ft_putstr_fd(char *s, int fd)\033[0m");
	printf("\nThis is puts(s) result:\n");
	puts(s);
	printf("This is ft_putstr_fd(*s, fd):\n");
	ft_putstr_fd(s, 1);

	printf("\n\n\t\033[1;35mTEST -- ft_putnbr_fd(int n, int fd)\033[0m");
	printf("\nThis is printf(d, n) result:\n");
	printf("%d\n", n_int_max);
	printf("%d", n_int_min);
	printf("\nThis is ft_putnbr_fd(n, fd):\n");
	ft_putnbr_fd(n_int_max, 1);
	printf("\n");
	ft_putnbr_fd(n_int_min, 1);

	printf("\n\n\t\033[1;35mTEST -- ft_putendl_fd(char *s, int fd)\033[0m");
	printf("\nThis is puts(s) result:\n");
	printf("%s\n", s);
	printf("This is ft_putstr_fd(*s, fd):\n");
	ft_putendl_fd(s, 1);

	printf("\n\t\033[1;35mTEST -- ft_isalpha (int c)\033[0m");
	printf("\nThis is ft_isalpha as c = %d (%c) and it should be 1:%d", ascii_A, ascii_A, ft_isalpha(ascii_A));
	printf("\nThis is ft_isalpha as c = %d (%c) and it should be 0:%d", ascii_one, ascii_one, ft_isalpha(ascii_one));
	printf("\nThis is ft_isalpha as c = %d (%c) and it should be 0:%d", ascii_tab, ascii_tab, ft_isalpha(ascii_tab));
	printf("\nThis is ft_isalpha as c = %d (%c) and it should be 0:%d", ascii_none, ascii_none, ft_isalpha(ascii_none));

	printf("\n\n\t\033[1;35mTEST -- ft_isalnum (int c)\033[0m");
	printf("\nThis is ft_isalnum as c = %d (%c) and it should be 1:%d", ascii_A, ascii_A, ft_isalnum(ascii_A));
	printf("\nThis is ft_isalnum as c = %d (%c) and it should be 1:%d", ascii_one, ascii_one, ft_isalnum(ascii_one));
	printf("\nThis is ft_isalnum as c = %d (%c) and it should be 0:%d", ascii_tab, ascii_tab, ft_isalnum(ascii_tab));
	printf("\nThis is ft_isalnum as c = %d (%c) and it should be 0:%d", ascii_none, ascii_none, ft_isalnum(ascii_none));

	printf("\n\n\t\033[1;35mTEST -- ft_isprint (int c)\033[0m");
	printf("\nThis is ft_isprint as c = %d (%c) and it should be 1:%d", ascii_A, ascii_A, ft_isprint(ascii_A));
	printf("\nThis is ft_isprint as c = %d (%c) and it should be 1:%d", ascii_one, ascii_one, ft_isprint(ascii_one));
	printf("\nThis is ft_isprint as c = %d (%c) and it should be 1:%d", ascii_tab, ascii_tab, ft_isprint(ascii_tab));
	printf("\nThis is ft_isprint as c = %d (%c) and it should be 0:%d", ascii_none, ascii_none, ft_isprint(ascii_none));

	printf("\n\n\t\033[1;35mTEST -- ft_isascii (int c)\033[0m");
	printf("\nThis is ft_isascii as c = %d (%c) and it should be 1:%d", ascii_A, ascii_A, ft_isascii(ascii_A));
	printf("\nThis is ft_isascii as c = %d (%c) and it should be 1:%d", ascii_one, ascii_one, ft_isascii(ascii_one));
	printf("\nThis is ft_isascii as c = %d (%c) and it should be 1:%d", ascii_tab, ascii_tab, ft_isascii(ascii_tab));
	printf("\nThis is ft_isascii as c = %d (%c) and it should be 1:%d", ascii_none, ascii_none, ft_isascii(ascii_none));

	printf("\n\n\t\033[1;35mTEST -- ft_toupper (int c)\033[0m");
	printf("\nThis is ft_toupper as c = %d (%c) and it should be A:%c", ascii_lowerA, ascii_lowerA, ft_toupper(ascii_lowerA));

	printf("\n\n\t\033[1;35mTEST -- ft_tolower (int c)\033[0m");
	printf("\nThis is ft_tolower as c = %d (%c) and it should be a:%c", ascii_A, ascii_A, ft_tolower(ascii_A));

	printf("\n\n\t\033[1;35mTEST -- ft_strlen (const char *s)\033[0m");
	printf("\nThis is ft_strlen as (s = %s) and it should be %ld:%ld", s, strlen(s), ft_strlen(s));

	printf("\n\n\t\033[1;35mTEST -- ft_strlcpy (char *restrict dst, const char *restrict src, size_t dstsize)\033[0m");
	printf("\nThis is ft_strlcpy as src = %s, dst[42] and dstsize = 10 it should be %ld:%ld", s, strlcpy(str_buffer, s, 10), ft_strlcpy(str_buffer, s, 10));

	printf("\n\n\t\033[1;35mTEST -- ft_strlcat (char *restrict dst, const char *restrict src, size_t dstsize)\033[0m");
	printf("\nThis is ft_strlcat as src = %s, dst = %s and dstsize = 10 it should be %ld:ld", s, s1, strlcat(s1, s, 10));//, ft_strlcat(s1, s, 10));
/* Follow up in test needed:

 */

	return 0;
}
