/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:16:05 by akapiton          #+#    #+#             */
/*   Updated: 2023/03/07 16:16:06 by akapiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		return (src_len + dstdize);
	else
	{
		while (src[j] && (dst_len + j) < dstsize)
			dst[i++] = src[j++];
		if ((dst_len + j) == dstsize && dst_len < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (src_len + dst_len);
	}
}
