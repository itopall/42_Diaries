/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itopal <itopal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:13:28 by itopal            #+#    #+#             */
/*   Updated: 2022/02/20 19:13:32 by itopal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(*lst));
	if (!lst)
	{
		return (NULL);
	}
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
