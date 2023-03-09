#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*blank;

	if (!s || !f)
		return (NULL);
	if (!(blank = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			blank[i] = (*f)(i, s[i]);
			i++;
		}
	}
	blank[i] = '\0';
	return (blank);
}
