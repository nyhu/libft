# include "libft.h"

int		ft_freegiveone(void *kill)
{
	free(kill);
	return (1);
}

int		ft_freegivezero(void *kill)
{
	free(kill);
	return (0);
}
