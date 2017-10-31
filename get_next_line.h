#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <stdlib.h>

# include <fcntl.h>

# include <unistd.h>

# define BUFF_SIZE 128

int					get_next_line(const int fd, char **line);

char				*ft_strcpy(char *dst, const char *src);

char				*ft_strjoin(char const *s1, char const *s2);

size_t				ft_strlen(const char *s);

char				*ft_strchr(const char *s, int c);

char				*ft_strdup(const char *s1);

#endif
