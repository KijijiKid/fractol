/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandre <mandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:18:37 by mandre            #+#    #+#             */
/*   Updated: 2025/08/05 19:04:15 by mandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include "../libft.h"

char		*get_next_line(int fd);
bool		ft_find_occurence(const char *s, int c);
size_t		strlen_special(const char *str);
char		*ft_strdup(const char *s);
char		*ft_strjoin_gnl(char const *s1, char const *s2);

#endif