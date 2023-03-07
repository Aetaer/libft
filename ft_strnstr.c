/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:17:51 by akapiton          #+#    #+#             */
/*   Updated: 2023/03/07 16:17:52 by akapiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *ndl, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(ndl);
	if (n_len == 0 || haystack == ndl)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] != '\0' && ndl[c] != '\0' && hay[i + c] == ndl[c] && i + c < len)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}
