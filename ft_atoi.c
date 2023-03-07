/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:10:31 by akapiton          #+#    #+#             */
/*   Updated: 2023/03/07 16:10:40 by akapiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    long i;
    long nbr;
    int isneg;

    i = 0;
    nbr = 0;
    isneg = 0;
    while (str[i] != '\0' && (str[i] == 32 || (str[i] <= 9 && str[i] >= 13)))
        i++;
    if(str[i] != '\0' && str[i] == '-')
    {
        isneg = 1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && ft_isdigit(str[i]))
        nbr = (nbr * 10) + (str[i++] - '0');
    if (isneg == 1)
        return (-nbr);
    return (nbr);
}
