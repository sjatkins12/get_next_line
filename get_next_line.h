/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satkins <satkins@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 12:14:45 by satkins           #+#    #+#             */
/*   Updated: 2017/11/06 12:14:50 by satkins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <stdlib.h>

# include <fcntl.h>

# include <unistd.h>

# define BUFF_SIZE 50

# include "./libft/libft.h"

int					get_next_line(const int fd, char **line);

#endif
