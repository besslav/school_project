/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_drow_start.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskip <pskip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:27:52 by pskip             #+#    #+#             */
/*   Updated: 2022/07/12 17:12:34 by pskip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	drow_image(t_game_data *game_data, t_mlx_data *mlx_data)
{
	ft_bzero(mlx_data->addr, HEIGHT * WIDTH * (mlx_data->bits_per_pixel / 8));
	printf("vdfzsfds\n");
	drow_back(mlx_data, game_data);
	printf("fsa");
	throw_rays(game_data, mlx_data);





	mlx_put_image_to_window(mlx_data->mlx, mlx_data->win, mlx_data->img, 0, 0);
}