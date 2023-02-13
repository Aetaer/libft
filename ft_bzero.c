#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned char   *temp;

    i = 0;
    temp = s;
    while (i < n)
    {
        temp[i] = '\0';
        i++;
    }
    s = temp;
}

int main()
{
    char    str[] = "1526";
    printf("%s\n", str);
    ft_bzero(str, 2);
    printf("%s\n", str);
    return (0);
}