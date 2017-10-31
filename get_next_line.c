/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satkins <satkins@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 15:31:12 by satkins           #+#    #+#             */
/*   Updated: 2017/10/18 15:40:38 by satkins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				check_buff(char **hold, char **line)
{
	char		*tmp;
	if ((tmp = ft_strchr(*hold, '\n')))
	{
		*tmp = '\0';
		if (!(*line = (char *)malloc(sizeof(char) * ft_strlen(*hold) + 1)))
			return (-1);
		ft_strcpy(*line, *hold);
		tmp++;
		*hold = tmp;
		return (1);
	}
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static char		*hold_over;
	int				bytes;

	if (hold_over != NULL)
		if (check_buff(&hold_over, line))
			return (1);
	while ((bytes = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[bytes] = 0;
		if (!hold_over)
			hold_over = ft_strdup(buff);
		else
			hold_over = ft_strjoin(hold_over, buff);
		if (check_buff(&hold_over, line))
			return (1);
	}
	if (bytes < 0)
		return (-1);
	if (hold_over == NULL)
		return (0);
	if (!(*line = (char *)malloc(sizeof(char) * ft_strlen(hold_over) + 1)))
			return (-1);
	ft_strcpy(*line, hold_over);
	return (1);
}
