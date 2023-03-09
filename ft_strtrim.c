#include "libft.h"

static int	whatspace(int c)
{
	if ((c == ' ' || c == '\t' || c == '\n'))
		return (1);
	return (0);
}

static char	strspace(char const *s)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			z++;
		i++;
	}
	if (i == z)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	size_t	front;
	size_t	back;
	size_t	z;
	char	*middle;

	if (!s || !ft_strlen(s))
		return ((char*)s);
	if (strspace(s) == 1)
		return (ft_strnew(1));
	front = 0;
	back = ft_strlen(s) - 1;
	z = 0;
	while (whatspace(s[front]))
		front++;
	while (whatspace(s[back]) != 0)
		back--;
	z = back - front + 1;
	if (!(middle = ft_strnew(z + 1)))
		return (NULL);
	return (ft_strncpy(middle, &s[front], z));
}
