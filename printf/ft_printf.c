#include <stdarg.h>
#include "libft.h"

static const char	*ft_valist_parse(t_list **begin, const char *format)
{
	char		*t;

	t = (char *)(format + 1);
	if (*t == '%' && !(t = ft_strsub(t, 0, 1))
		return (NULL);
	else
	{
		if (!(t = ft_memalloc(//Va_list serait un tableau de void * ! Bien pratique pour chercher les arg comme l'on veut.
		while (*(++format))
	}
	return (format);
}

static int			ft_valist_fmt_read(t_list **begin, const char *format)
{
	char		*t;
	size_t		s;

	t = (char *)format;
	while (*format)
	{
		if (*format == '%')
		{
			if (t != format && (s = format - t) && !(t = ft_strsub(t, 0, s)))
				return (ft_lstdel_err(begin, &ft_list_free_data));
			if (t != format)
				ft_list_push_back(begin, (void *)t, s);
			if (!(format = ft_valist_parse(begin, format + 1, ap))
				|| !(t = (char *)format))
				return (ft_lstdel_err(begin, &ft_list_free_data));
		}
		else
			++format;
	}
	if (t != format && (s = format - t) && !(t = ft_strsub(t, 0, s)))
		return (ft_lstdel_err(begin, &ft_list_free_data));
	if (t != format)
		ft_list_push_back(begin, (void *)t, s);
	return (*begin ? 1 : 0);
}

int					ft_printf(const char *format, ...)
{
	va_list		ap;
	t_list		*begin;
	char		*result;
	size_t		s;
	int			ret;

	begin = NULL;
	result = NULL;
	if ((ret = ft_valist_fmt_read(&begin, format, ap)) <= 0)
		return (ret);
	va_start(ap, format);
	va_end(ap);
	if (!(s = ft_list_strjoin(&result, begin)))
		return (-1);
	ft_lstdel(&begin, &ft_list_free_data);
	write(1, result, s);
	free(result);
	return ((ret = (int)s));
}
