#include "libft.h"

void	ft_putstrtab_fd(char const **s, char c, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		ft_putstr_fd(s[i], fd);
		if (s[i + 1])
			ft_putchar_fd(c, fd);
	}
}

void	ft_putstrtab(char const **s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		ft_putstr(s[i]);
		if (s[1 + 1])
			ft_putchar(c);
	}
}
