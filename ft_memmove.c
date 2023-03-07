/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:15:09 by akapiton          #+#    #+#             */
/*   Updated: 2023/03/07 16:15:11 by akapiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = dst;
	temp2 = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	if (dst > src)
		while (n--)
			temp1[n] = temp2[n];
	return (dst);
}

/*int main()
{
    char    dst[] = "";
    char    src[] = "hello";

    printf("Source is %s\n", src);
    printf("Dest is %s\n", dst);
    ft_memmove(dst, src, 2);
    printf("Source is %s\n", src);
    printf("Dest is %s\n", dst);
    return (0);
}*/
