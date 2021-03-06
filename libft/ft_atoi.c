/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskip <pskip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:33:11 by pskip             #+#    #+#             */
/*   Updated: 2021/10/14 11:46:36 by pskip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		ans;

	ans = 0;
	i = 0;
	sign = 1;
	while (((str[i] > 8) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	if ((*(str + i) == '-') || (*(str + i) == '+'))
	{	
		if (*(str + i) == '-')
			sign = sign * -1;
		i++;
	}
	while ((*(str + i) >= '0') && (*(str + i) <= '9'))
	{
		ans = (ans * 10) + (*(str + i) - 48);
		i++;
	}
	return (ans * sign);
}
