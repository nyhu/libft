#include "libft.h"

void	ft_putstrtab_fd(char const **s, char c, int fd)
{
	if (*s)
	{
		ft_putstr_fd(*s, fd);
		ft_putchar_fd(c, fd);
		ft_putstrtab_fd((char const **)(s + sizeof(char *)), c, fd);
	}
}

void	ft_putstrtab(char const **s, char c)
{
	if (*s)
	{
		ft_putstr(*s);
		ft_putchar(c);
		ft_putstrtab((char const **)(s + sizeof(char *)), c);
	}
}
