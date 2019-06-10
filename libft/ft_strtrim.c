


#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int a;
int b;
int c;
char *cpy;

if (s)
{
	a = 0;
b = ft_strlen((char *)(s)) - 1;
while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
i++;
if (!(cpy = (char *)malloc(sizeof(*cpy) * (b - a +1))))
return (NULL);
while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
b--;
c = 0;
while (a <= b)
{
	cpy[c++] = s[a];
a++;
}
cpy[c] = '\0';
return (cpy);
}
return (NULL);
}
