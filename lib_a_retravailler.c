# include "libft.h"
void			ft_revlst(t_dirent **begin)
{
	t_dirent	*rabbit;
	t_dirent	*turtle;
	t_dirent	*memo;

	if (*begin && (*begin)->next)
	{
		memo = *begin;
		turtle = memo->next;
		rabbit = turtle->next;
		memo->next = NULL;
		while (turtle)
		{
			turtle->next = memo;
			memo = turtle;
			turtle = rabbit;
			if (rabbit)
				rabbit = rabbit->next;
		}
		*begin = memo;
	}
}

void			ft_sortlst(t_dirent **begin, int arg)
{
	t_dirent		*stick;
	t_dirent		*rabbit;

	*begin = ft_listshunt(*begin, arg);
	stick = *begin;
	while (stick->next != *begin)
	{
		rabbit = stick->next;
		while (rabbit->next != *begin)
		{
			if (ft_cmpls(rabbit->next, stick->next, arg) < 0)
			{
				ft_swaplist(stick, rabbit);
				rabbit = stick->next;
			}
			rabbit = rabbit->next;
		}
		stick = stick->next;
	}
	stick->next = NULL;
}

void	ft_swaplist(t_dirent *rabbit, t_dirent *turtle)
{
	t_dirent	*memo;

	memo = turtle->next;
	turtle->next = turtle->next->next;
	memo->next = rabbit->next;
	rabbit->next = memo;
}

t_dirent	*ft_listshunt(t_dirent *begin, int arg)
{
	t_dirent	*stick;

	stick = begin;
	while (stick->next)
		stick = stick->next;
	stick->next = begin;
	stick = begin->next;
	while (stick != begin)
	{
		if (ft_cmpls(stick, begin, arg) < 0)
			begin = stick;
		stick = stick->next;
	}
	return (begin);
}
