/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:03:20 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/15 12:54:34 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;			
}				t_list;

typedef unsigned char	t_char;

/*Parte 1*/

/*convert ASCII string to integer.*/
int		ft_atoi(const char *str);
/*write zeroes to a byte string.*/
void	ft_bzero(void *s, size_t n);
/*test for alphanumeric character.*/
int		ft_isalnum(int arg);
/*test for alphabetic character.*/
int		ft_isalpha(int arg);
/*test for ASCII character.*/
int		ft_isascii(int arg);
/*test for decimal-digit character.*/
int		ft_isdigit(int arg);
/*test for printing character.*/
int		ft_isprint(int arg);
/*write a byte to a byte string.*/
void	*ft_memset(void *s, int c, size_t n);
/*copy byte string.*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/*compare byte string.*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*copy memory area.*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/*locate character in string (first occurrence).*/
char	*ft_strchr(const char *s, int c);
/*locate character in string (last occurence).*/
char	*ft_strrchr(const char *s, int c);
/*string concatenation (with size limit).*/
size_t	ft_strlcat(char *dest, const char *src, size_t n);
/*string copying (with size limit).*/
int		ft_strlcpy(char *dest, char *src, size_t n);
/*find length of string.*/
size_t	ft_strlen(const char *str);
/*locate a substring in a string (with size limit).*/
char	*ft_strnstr(const char *big, const char *little, size_t len);
/*compare strings (with size limit).*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*upper case to lower case letter conversion.*/
int		ft_tolower(int arg);
/*lower case to upper case letter conversion.*/
int		ft_toupper(int arg);
/*save a copy of a string (with malloc).*/
char	*ft_strdup(const char *s);
/*memory allocation.*/
void	*ft_calloc(size_t nmemb, size_t size);
/*locate byte in byte string.*/
void	*ft_memchr(const void *s, int c, size_t n);

/*Parte 2*/

/*extract substring from string.*/
char	*ft_substr(const char *str, unsigned int start, size_t len);
/*trim beginning and end of string with the specified characters.*/
char	*ft_strtrim(const char *s1, const char *set);
/*concatenate two strings into a new string (with malloc).*/
char	*ft_strjoin(const char *s1, const char *s2);
/*output integer to given file.*/
void	ft_putnbr_fd(int n, int fd);
/*output a character to given file.*/
void	ft_putchar_fd(char c, int fd);
/*output string to given file.*/
void	ft_putstr_fd(char *s, int fd);
/*output string to given file with newline.*/
void	ft_putendl_fd(char *s, int fd);
/*split string, with specified character as delimiter,
 into an array of strings.*/
char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*Bonus part*/

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
