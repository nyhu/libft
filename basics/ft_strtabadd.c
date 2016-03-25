#include "libft.h"

int		ft_strtablen(char **t)
{
	int		i;

	if (!t)
		return (-1);
	i = 0;
	while (t[i])
		i++;
	return (i);
}

char	**ft_strncmptabdel(char **dest, char *needle)
{
	int		i;

	if ((i = ft_strtabifindstart(dest, needle)) < 0)
		return (NULL);
	free(dest[i]);
	dest[i] = dest[i + 1];
	while (dest[++i])
		dest[i] = dest[i + 1];
	return (dest);
}

char	**ft_strstrtabdel(char **dest, char *needle)
{
	int		i;

	if ((i = ft_strtabifind(dest, needle)) < 0)
		return (NULL);
	free(dest[i]);
	dest[i] = dest[i + 1];
	while (dest[++i])
		dest[i] = dest[i + 1];
	return (dest);
}

char	**ft_strtabadd(char **dest, char *new)
{
	int		i;
	char	**res;

	if ((i = ft_strtablen(dest)) < 0
		|| (res = (char **)ft_memalloc(sizeof(char *) * (i + 2))))
		return (NULL);
	res[i] = new;
	while (--i >= 0)
		res[i] = dest[i];
	return (res);
}
