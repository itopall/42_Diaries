/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itopal <itopal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:14:13 by itopal            #+#    #+#             */
/*   Updated: 2022/02/20 19:14:15 by itopal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int val, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *)s;
	while (n-- > 0)
			*x++ = val;
	return (s);
}
