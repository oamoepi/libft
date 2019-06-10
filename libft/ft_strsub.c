


#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;
int i;

if (s)
{
	i = 0;
if (!(sub = (char*)malloc(sizeof(*s) * (len + 1))))
return (NULL);
while (s[start] && len -- > 0)
sub[i++] = s[start++];
sub[i] = '\0';
return (sub);
}
else
return (NULL);
}
