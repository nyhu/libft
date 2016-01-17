#include "test.h"

int	ft_test_isdigit2(char c)
{
	int	res;
	int	res2;
	int	res3;

	res = 0;
	res2 = ft_isdigit(c);
	res3 = isdigit(c);
	if (res2 != res3)
		++res;
	printf("Test : %c { %d - %d }", c, res2, res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_isdigit(void)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	ft_print_begin("ft_isdigit");
	while (i++ < 255)
		res += ft_test_isdigit2((char)i);
	return (ft_print_end(res));
}