/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:07:44 by grebett           #+#    #+#             */
/*   Updated: 2015/01/23 14:42:37 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** memory functions
*/
void				*ft_memalloc(size_t size);
void				*ft_memset(void *ptr, int c, size_t size);
void				*ft_bzero(void *ptr, size_t size);
void				*ft_memcpy(void *s1, const void *s2, size_t size);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t size);
void				*ft_memmove(void *s1, const void *s2, size_t size);
void				*ft_memchr(const void *str, int c, size_t size);
int					ft_memcmp(const void *s1, const void *s2, size_t size);
void				ft_memdel(void **ap);

/*
** print functions
*/
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putendl(char *str);
void				ft_putnbr(int nb);

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int nb, int fd);

/*
** getter functions
*/
size_t				ft_strlen(const char *str);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t size);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t size);

/*
** char and string manipulating functions
*/
int					ft_atoi(const char *str);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_strclr(char *str);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *s1, const char *s2);
char				*ft_strncpy(char *s1, const char *s2, size_t size);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t size);
size_t				ft_strlcat(char *s1, const char *s2, size_t size);
char				*ft_itoa(int n);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);

/*
** test functions
*/
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);

int					ft_strequ(char *s1, char *s2);
int					ft_strnequ(char *s1, char *s2, int nb);

/*
** list functions
*/
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
#endif
