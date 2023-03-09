#include "libft.h"

static int	wordcount(char const *str, char c)
{
	int		i;
	int		timer;

	i = 0;
	timer = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			timer++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (timer);
}

static int	wordlen(char const *str, char c)
{
	int		i;
	int		timer2;

	i = 0;
	timer2 = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		timer2++;
		i++;
	}
	return (timer2);
}

char		**ft_split(char const *s, char c)
{
	char	**strmagic;
	int		i;
	int		i2;
	int		i3;

	if (!s || !(strmagic = (char **)malloc(sizeof(*strmagic)
	* (wordcount(s, c) + 1))))
		return (0);
	i = -1;
	i2 = 0;
	while (++i < wordcount(s, c))
	{
		i3 = 0;
		if (!(strmagic[i] = ft_strnew(wordlen(&s[i2], c) + 1)))
			strmagic[i] = NULL;
		while (s[i2] == c)
			i2++;
		while (s[i2] != c && s[i2])
			strmagic[i][i3++] = s[i2++];
		strmagic[i][i3] = '\0';
	}
	strmagic[i] = 0;
	return (strmagic);
}
