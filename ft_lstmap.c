/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapiton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:10:19 by akapiton          #+#    #+#             */
/*   Updated: 2023/03/13 19:10:20 by akapiton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	const t_list	*lstp = lst;
	void			*is_success;
	t_list			*ret;
	t_list			*new;

	ret = NULL;
	new = NULL;
	while (lstp)
	{
		is_success = f(lstp->content);
		if (is_success)
		{
			new = ft_lstnew(is_success);
			if (!(new))
			{
				ft_lstclear(&lst, del);
				return (NULL);
			}
			ft_lstadd_back(&ret, new);
		}
		lstp = lstp->next;
	}
	return (ret);
}
