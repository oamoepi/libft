


#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;

i = 0;
while (*(char const *)(s + i))
{
	write(1, &*(char const*)(s + i), 1);
i++;
}
}
