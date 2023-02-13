#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *temp;

    i = 0;
    temp = (unsigned char *)s;
    while (i < n)
    {
        temp[i] = c;
        i++;
    }
    return (s = temp);
}

/*int main()
{
    char    str[] = "hello";
    int change = 88;

    printf("%s\n", str);
    ft_memset(str, change, 2);
    printf("%s\n", str);
    return (0);
}*/