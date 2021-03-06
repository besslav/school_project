/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskip <pskip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:35:06 by pskip             #+#    #+#             */
/*   Updated: 2021/10/20 14:44:04 by pskip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(void *str, int ascii_code, size_t end)
//Выполняет поиск ascii_code в str, no more then (end) check
{
	size_t		ind;
	char		*strng;

	strng = str;
	ind = 0;
	ascii_code = (unsigned char)ascii_code;
	while (ind < end)
	{
		if (strng[ind] == ascii_code)
			return (&strng[ind]);
		ind++;
	}
	return (0);
}
