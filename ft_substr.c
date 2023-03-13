/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:15:13 by akapiton          #+#    #+#             */
/*   Updated: 2023/03/13 19:15:15 by akapiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*str;

	size = ft_strlen(&s[start]);
	if (len > size)
		len = size;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str || !s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
