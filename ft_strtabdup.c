# include "libft.h"

char	**ft_strtabdup(char **src)
{
	size_t	i;
	char	**dest;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = (char **)ft_memalloc(sizeof(char *) * (i + 1))))
		return (NULL);
	while (i--)
		if (!(dest[i] = ft_strdup(src[i])))
		{
			while (dest[++i])
				free(dest[i]);
			free(dest);
			return (NULL);
		}
	return (dest);
}
