/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:11:13 by akapiton          #+#    #+#             */
/*   Updated: 2023/03/13 19:11:14 by akapiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*to;
	const unsigned char	*from;

	if (!dest && !src)
		return (0);
	to = dest;
	from = src;
	while (n-- > 0)
	{
		*to++ = *from++;
	}
	return (dest);
}
