/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciglesia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:28:56 by ciglesia          #+#    #+#             */
/*   Updated: 2020/09/01 01:49:13 by ciglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <fcntl.h>

# define BUFF_SIZE 6
# define BOLD "\e[1m"
# define DIM "\e[2m"
# define ITALIC "\e[3m"
# define UNDERL "\e[4m"
# define BLINK "\e[5m"
# define REVER "\e[7m"
# define INVIS "\e[8m"
# define RED "\e[38;2;255;0;0m"
# define GREEN "\e[92m"
# define CYAN "\e[96m"
# define BLUE "\e[34m"
# define YELLOW "\e[33m"
# define ERROR "\e[38;2;255;0;0m\e[1mERROR\e[0m\e[38;2;255;0;0m"
# define BLACKB "\e[40m"
# define GRAY "\e[90m"
# define E0M "\e[0m"

intmax_t			ft_abs(intmax_t x);
int					ft_countchr(const char *s, int c);
int					ft_atoi(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
size_t				ft_strlen(const char *s);
char				*ft_itoa(int n);
int					ft_putnbr_max(uintmax_t x, int fd);
int					ft_putchar_fd(char c, int fd);
char				*ft_strnew(size_t size);

#endif
