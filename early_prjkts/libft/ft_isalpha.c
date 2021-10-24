/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskip <pskip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:34:39 by pskip             #+#    #+#             */
/*   Updated: 2021/10/11 17:59:23 by pskip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int litera)
{
	if (((litera >= 65) && (litera <= 90))
		|| ((litera >= 97) && (litera <= 122)))
		return (1);
	return (0);
}