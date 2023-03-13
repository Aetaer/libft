/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:07:05 by akapiton          #+#    #+#             */
/*   Updated: 2023/03/13 19:07:06 by akapiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*str;

	i = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		str = malloc(0);
		return (str);
	}
	if (i / nmemb != size)
		return (0);
	str = malloc(i);
	if (!str)
		return (0);
	ft_bzero(str, i);
	return (str);
}
