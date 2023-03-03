#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*altdst;
	unsigned char	*altsrc;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	while (n > 0)
	{
		*altdst = *altsrc;
		altdst++;
		altsrc++;
		n--;
	}
	return (dst);
}

/*int main()
{
    char    dst[] = "";
    char    src[] = "hello";

    printf("Source is %s\n", src);
    printf("Dest is %s\n", dst);
    ft_memcpy(dst, src, 2);
    printf("Source is %s\n", src);
    printf("Dest is %s\n", dst);
    return (0);
}*/