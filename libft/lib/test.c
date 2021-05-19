#include <stdio.h>

void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);

int     main (void)
{
    char c;
    char *s;
    c = 'd';
    s = ">This is a string";
    printf("This is putchar(3p) result:\n");
    putchar(c);
    printf("\nThis is ft_putchar_fd(c, fd) result:\n");
    ft_putchar_fd(c, 1);
    printf("\nThis is putstr result:\n");
    puts(s);
    printf("This is ft_putstr_fd(*s, fd):\n");
    ft_putstr_fd(s, 1);

    return 0;
}