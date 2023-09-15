#ifndef  LIBFT_H
# define LIBFT_H

void	ft_bzero(void *dst, size_t n);
int     ft_isalnum(char c);
int	    ft_isalpha(char c);
int	    ft_isascii(char c);
int	    ft_isdigit(char c);
int	    ft_isprint(char c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memset(void	*str, int c, size_t n);
int	    ft_strlen(char *str);

#endif