


#include "libft.h"

void	ft_striter(char *s, void (*f)(char *c))
{
	if (s && f)
{
	while (*s)
{
	(*f)(s);
s++;
}
}
}
