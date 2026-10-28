#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	free_tab(char **tab, size_t n)
{
	while (n > 0)
	{
		n--;
		free(tab[n]);
	}
	free(tab);
}

static char	**fill_tab(char **tab, char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len == 0)
			continue ;
		tab[i] = ft_substr(s, 0, len);
		if (!tab[i])
			return (free_tab(tab, i), NULL);
		i++;
		s += len;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	return (fill_tab(tab, s, c));
}
