/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agragera <agragera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 01:34:02 by agragera          #+#    #+#             */
/*   Updated: 2024/03/13 01:34:02 by agragera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	c = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last);
}
