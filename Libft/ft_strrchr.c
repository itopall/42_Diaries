/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itopal <itopal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:15:55 by itopal            #+#    #+#             */
/*   Updated: 2022/02/20 19:54:05 by itopal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	s;

	s = ft_strlen(str);
	while (s >= 0)
	{
		if (str[s] == (char)c)
			return ((char *)(str + s));
		s--;
	}
	return (0);
}
