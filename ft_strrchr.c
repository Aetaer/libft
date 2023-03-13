/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:14:56 by akapiton          #+#    #+#             */
/*   Updated: 2023/03/13 19:14:57 by akapiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = (int)ft_strlen((char *)s);
	while (l >= 0)
	{
		if (s[l] == (char)c)
		{
			return ((char *)(s + l));
		}
		l--;
	}
	return (0);
}
