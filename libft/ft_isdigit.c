/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskip <pskip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:34:53 by pskip             #+#    #+#             */
/*   Updated: 2021/10/11 17:57:53 by pskip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int litera)
{
	if ((litera >= '0') && (litera <= '9'))
		return (1);
	return (0);
}
