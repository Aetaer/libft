/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:11:52 by akapiton          #+#    #+#             */
/*   Updated: 2023/03/07 16:11:54 by akapiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
	s = temp;
}

/*int main()
{
    char    str[] = "1526";
    printf("%s\n", str);
    ft_bzero(str, 2);
    printf("%s\n", str);
    return (0);
}*/
