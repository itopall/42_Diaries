/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itopal <itopal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:16:07 by itopal            #+#    #+#             */
/*   Updated: 2022/02/20 19:16:09 by itopal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*b;
	size_t	c;
	size_t	f;

	f = 0;
	c = ((size_t)start);
	if (s == 0)
		return (0);
	while (f < len && s[f + start] != '\0')
		f++;
	b = malloc((f + 1) * sizeof(char));
	if (!b || !s)
		return (0);
	a = 0;
	while (a < len && c < ft_strlen(s))
	{
		b[a++] = s[c++];
	}
	b[a] = '\0';
	return (b);
}
