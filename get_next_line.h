
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>



//void	ft_putnbr_fd(int nb, int fd);
//void	ft_putstr_fd(char *str, int fd);
//void	ft_putchar_fd(char s, int fd);
char    *get_next_line(int  fd);
char    *read_get_nls(int  fd, char *next_sentence);
int     get_nl_display(char   *result);
char    *next_sent(int  i, char *final);
int	    ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char	*s2);
char	*ft_strdup(char *s1);
size_t	ft_strlen(char *str);
char	*ft_strcpy(char	*dest, char	*src, int i);

#endif
