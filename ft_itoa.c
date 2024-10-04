/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agragera <agragera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 02:30:48 by agragera          #+#    #+#             */
/*   Updated: 2024/03/13 02:30:48 by agragera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length++;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static void	fill_str_with_num(char *str, int n, int length, int is_negative)
{
	if (is_negative)
		str[0] = '-';
	while (n != 0)
	{
		if (is_negative)
			str[--length] = '0' - n % 10;
		else
			str[--length] = '0' + n % 10;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	int		is_negative;

	length = get_num_length(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	fill_str_with_num(str, n, length, is_negative);
	return (str);
}
