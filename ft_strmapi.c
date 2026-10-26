#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	res = ft_strdup(s);
	if (!res)
		return (NULL);
	i = 0;
	while (res[i])
	{
		res[i] = f(i, res[i]);
		i++;
	}
	return (res);
}
