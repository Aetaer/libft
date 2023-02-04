#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char     *ss1;
    const unsigned char *ss2;
    size_t  i;

    i = 0;
    ss1 = (const unsigned char *)s1;
    ss2 = (const unsigned char *)s2;
    size_t  i;

    i = 0;
    ss1 = (const unsigned char *)s1;
    ss2 = (const unsigned char *)s2;
    while (i < n)
    {
        if (ss1[i] != ss2[i])
            return (ss1[i] - ss2[i]);
        i++;
    }
    return (0);
}