


int	ft_strnequ(chr const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
return (!ft_strncmp(s1, s2, n));
return (0);
}
