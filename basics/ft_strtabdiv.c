#include "libft.h"

char	**ft_strtabdiv(char **tab, char *needle)
{
	char	**div;
	int		i;

	i = -1;
	div = tab;
	while (div[++i])
		if (!strcmp(div[i], needle))
			break;
	free(div[i]);
	if (!div[++i] || !(div = ft_strtabdup(&(div[i]))))
		return (NULL);
	return (div);
}
