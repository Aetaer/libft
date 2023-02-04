#include "libft.h"

size_t ft_strlen(const char *s)
{
    int c;

    c = 0;
    if (!s)
        return (0);
    while (s[c] != '\0')
        c++;
    return (c);
}