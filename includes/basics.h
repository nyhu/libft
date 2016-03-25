#ifndef BASICS_H
# define BASICS_H
# include <string.h>
# include <errno.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>

/*
** MEM Handle
*/
void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t size);
void	ft_memdel(void **ap);
int		ft_freegiveone(void **kill);
void	ft_strdel(char **as);
void	ft_strtabfree(char **tab);

/*
** SIZING
*/
size_t	ft_strlen(const char *s);

/*
** STRING DUP
*/
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const*s2);
char	**ft_strtabdup(char **src);
char	*ft_strdup(const char *s);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));

/*
** STRING WORK
*/
char	*ft_strslashjoin(char *s1, char *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char *s, char c);

/*
** COPY
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);

/*
** CAT
*/
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/*
** FIND
*/
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strtabfind(char **tab, char *needle);
int		ft_strtabifind(char **tab, char *needle);
char	*ft_strtabfindstart(char **tab, char *needle);
int		ft_strtabifindstart(char **tab, char *needle);

/*
** COMPARE
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/*
** STRING SET
*/
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
