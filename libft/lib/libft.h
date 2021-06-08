#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <bsd/string.h>

/* Need advanced testing */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_isalpha (int c);
int		ft_isalnum (int c);
int		ft_isascii (int c);
int		ft_isprint (int c);
int		ft_toupper (int c);
int		ft_tolower (int c);
size_t	ft_strlen (const char *s);
size_t	ft_strlcpy(char *restrict dst,
			 const char *restrict src, size_t dstsize);
/* Need simple testing */
size_t	ft_strlcat(char *restrict dst,
			 const char *restrict src, size_t dstsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);


/*/\/\/\    Done    /\/\/\*/
/*\/\/\/  Not Done  \/\/\/*/
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	*ft_memset (void *block, int c, size_t size);
void	ft_bzero (void *block, size_t size);
void	*ft_memcpy (void *restrict to, const void *restrict from, size_t size);
void	*ft_memccpy (void *restrict to,
			   const void *restrict from, int c, size_t size);
void	*ft_memmove (void *to, const void *from, size_t size);
void	*ft_memchr (const void *block, int c, size_t size);
int		ft_memcmp (const void *a1, const void *a2, size_t size);
char	*ft_strchr (const char *string, int c);
char	*ft_strrchr (const char *string, int c);
int		ft_strncmp(const char	*s1, const char	*s2, size_t len);
int		ft_atoi (const char *string);
void	*ft_calloc (size_t count, size_t eltsize);
char	*ft_strdup (const char *s);

/*Bonus
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
*/
#endif /*LIBFT_H*/