/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskip <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 23:11:25 by pskip             #+#    #+#             */
/*   Updated: 2021/08/04 23:11:30 by pskip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*ans;

	i = 0;
	ans = (int *)malloc (sizeof(int) * (length));
	while (i < length)
	{
		ans[i] = (*f)(tab[i]);
		i++;
	}
	return (ans);
}