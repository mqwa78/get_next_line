/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:58:00 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/22 00:04:05 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

typedef int BOOL;

size_t	ft_strlen(const char *str);
size_t	ft_count_char(const char *str);
BOOL	ft_check_endline(const char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *storage, char *buffer);
char	*ft_create_line(char *str);
char	*ft_fill_storage(char *storage, int fd);
char	*ft_new_storage(char *storage);

#endif