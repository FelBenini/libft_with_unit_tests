/* ************************************************************************** */ /*                                                                            */
/*                                                        :::      ::::::::   */
/*   weaks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:26:40 by fbenini-          #+#    #+#             */
/*   Updated: 2025/07/15 17:46:08 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

__attribute__((weak)) void	*ft_calloc(size_t nmemb, size_t size)
{
	(void)size;
	(void)nmemb;
	return ("Function not implemented");
}

__attribute__((weak)) int ft_atoi(const char *str)
{
	(void)str;
	return (-1);
}

__attribute__((weak)) void	ft_bzero(void *src, size_t len)
{
	(void)src;
	(void)len;
}

__attribute__((weak)) int ft_isalnum(int x)
{
	(void)x;
	return (-1);
}

__attribute__((weak)) int ft_isalpha(char c)
{
	(void)c;
	return (-1);
}

__attribute__((weak)) int ft_isascii(int c)
{
	(void)c;
	return (-1);
}

__attribute__((weak)) int ft_isdigit(int c)
{
	(void)c;
	return (-1);
}

__attribute__((weak)) int ft_isprint(char c)
{
	(void)c;
	return (-1);
}

__attribute__((weak)) char *ft_itoa(int n)
{
	(void)n;
	return ("Function not implemented");
}

__attribute__((weak)) void *ft_memchr(const void *s, int c, size_t n)
{
	(void)s;
	(void)n;
	(void)c;
	return ("Function not implemented");
}

__attribute__((weak)) int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	(void)s1;
	(void)s2;
	(void)n;
	return (-1);
}

__attribute__((weak)) void *ft_memcpy(void *dest, const void *src, size_t count)
{
	(void)dest;
	(void)src;
	(void)count;
	return ("Function not implemented");
}

__attribute__((weak)) void	*ft_memmove(void *dest, const void *src, size_t count)
{
	(void)dest;
	(void)src;
	(void)count;
	return ("Function not implemented");
}

__attribute__((weak)) void *ft_memset(void *src, int value, size_t len)
{
	(void)src;
	(void)value;
	(void)len;
	return ("Function not implemented");
}

__attribute__((weak)) char	**ft_split(char const *s, char c)
{
	(void)s;
	(void)c;
	return (0);
}

__attribute__((weak)) char *ft_strchr(const char *s, int c)
{
	(void)s;
	(void)c;
	return (0);
}

__attribute__((weak)) char *ft_strdup(const char *src)
{
	(void)src;
	return (0);
}

__attribute__((weak)) void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	(void)s;
	(void)f;
}

__attribute__((weak)) char *ft_strjoin(char const *s1, char const *s2)
{
	(void)s1;
	(void)s2;
	return (0);
}

__attribute__((weak)) size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	(void)dst;
	(void)src;
	(void)size;
	return (0);
}

__attribute__((weak)) size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	(void)dst;
	(void)src;
	(void)size;
	return (0);
}

__attribute__((weak)) size_t ft_strlen(char *str)
{
	(void)str;
	return (0);
}

__attribute__((weak)) int ft_strncmp(char *s1, char *s2, size_t n)
{
	(void)s1;
	(void)s2;
	(void)n;
	return (-1);
}

__attribute__((weak)) char *ft_strnstr(const char *big, const char *little, size_t len)
{
	(void)big;
	(void)little;
	(void)len;
	return (0);
}

__attribute__((weak)) char *ft_strrchr(const char *string, int c)
{
	(void)string;
	(void)c;
	return (0);
}

__attribute__((weak)) char *ft_substr(char const *s, unsigned int start, size_t len)
{
	(void)s;
	(void)start;
	(void)len;
	return (0);
}

__attribute__((weak)) int ft_tolower(int C)
{
	(void)C;
	return (0);
}

__attribute__((weak)) int ft_toupper(int c)
{
	(void)c;
	return (0);
}

__attribute__((weak)) char	*ft_strtrim(char const *s1, char const *set)
{
	(void)s1;
	(void)set;
	return (0);
}

__attribute__((weak)) void ft_putchar_fd(char c, int fd)
{
	(void)c;
	(void)fd;
}

__attribute__((weak)) void ft_putstr_fd(char *s, int fd)
{
	(void)s;
	(void)fd;
}

__attribute__((weak)) void ft_putendl_fd(char *s, int fd)
{
	(void)s;
	(void)fd;
}

__attribute__((weak)) void ft_putnbr_fd(int n, int fd)
{
	(void)n;
	(void)fd;
}

__attribute__((weak)) t_list *ft_lstnew(void *content)
{
	t_list *res = malloc(sizeof(t_list));
	res->content = "Empty";
	(void)content;
	return (res);
}

__attribute__((weak)) void ft_lstadd_front(t_list **lst, t_list *new)
{
	(void)lst;
	(void)new;
}

__attribute__((weak)) int ft_lstsize(t_list *lst)
{
	(void)lst;
	return (0);
}

__attribute__((weak)) t_list *ft_lstlast(t_list *lst)
{
	(void)lst;
	return (ft_lstnew(0));
}

__attribute__((weak)) void ft_lstadd_back(t_list **lst, t_list *new)
{
	new = malloc(sizeof(t_list));
	new->content = "Empty";
	new->next = NULL;
	*lst = new;
}
