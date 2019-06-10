


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;
unsigned int i;

if (!s)
return (NULL);
i = 0;
if (!(new = (char*)malloc(ft_strlen(s) + 1)))
return (NULL);
while (s[1])
{
	new[i] = (*f)(i, (s[i]));
i++;
}
new[i] = '\0';
return (new);
}
