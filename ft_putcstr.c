# include "libft.h"

void	ft_putcstr(char *str, char c, int size, char pos)
{
	char	tab[512];
	int		i;

	if (size < 512)
	{
		i = -1;
		if (pos == 'L')
			while (*str && ++i < size)
				tab[i] = *(str++);
		while (++i < size)
			tab[i] = c;
		tab[size] = '\0';
		if (pos == 'R')
		{
			i = size - strlen(str);
			while (*str)
			{
				tab[i] = *str;
				i++;
				str++;
			}
		}
	ft_putstr(tab);
	}
}
