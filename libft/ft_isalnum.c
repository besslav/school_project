/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskip <pskip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:34:30 by pskip             #+#    #+#             */
/*   Updated: 2021/10/11 18:00:51 by pskip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int litera)
{
	if (((litera >= '0') && (litera <= '9'))
		|| (((litera >= 65) && (litera <= 90))
			|| ((litera >= 97) && (litera <= 122))))
		return (1);
	return (0);
}
