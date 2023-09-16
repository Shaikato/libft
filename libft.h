/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:51:26 by randre            #+#    #+#             */
/*   Updated: 2023/09/16 22:51:26 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
char    *ft_strchr(const char *str, int c);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_tolower(int c)
int     ft_toupper(int c)
int	    ft_atoi(const char *str)
char    *ft_strrchr(const char *str, int c)
int     ft_strncmp(const char *str1, const char *str2, size_t n)
char    *ft_strnstr(const char *big, const char *little, size_t len)
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
size_t  ft_strlcat(char *dst, char *src, size_t dstsize)
void    *ft_calloc(size_t nitems, size_t size)
char    *ft_strdup(const char *s)

#endif