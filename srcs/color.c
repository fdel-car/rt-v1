/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 17:09:26 by fdel-car          #+#    #+#             */
/*   Updated: 2016/07/21 20:29:46 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

t_color	create_color(int r, int g, int b)
{
	t_color color;

	color.r = r;
	color.g = g;
	color.b = b;
	return (color);
}

t_color	multiple_color(t_color color, float value)
{
	t_color rgb;

	rgb.r = color.r * value;
	if (rgb.r > 255)
		rgb.r = 255;
	rgb.g = color.g * value;
	if (rgb.g > 255)
		rgb.g = 255;
	rgb.b = color.b * value;
	if (rgb.b > 255)
		rgb.b = 255;
	return (rgb);
}

t_color	add_color(t_color u, t_color v)
{
	t_color rgb;

	rgb.r = u.r + v.r * 0.85;
	if (rgb.r > 255)
		rgb.r = 255;
	rgb.g = u.g + v.g * 0.85;
	if (rgb.g > 255)
		rgb.g = 255;
	rgb.b = u.b + v.b * 0.85;
	if (rgb.b > 255)
		rgb.b = 255;
	return (rgb);
}

t_color	subtract_color(t_color u, t_color v)
{
	t_color rgb;

	rgb.r = u.r - v.r;
	if (rgb.r < 0)
		rgb.r = 0;
	rgb.g = u.g - v.g;
	if (rgb.g < 0)
		rgb.g = 0;
	rgb.b = u.b - v.b;
	if (rgb.b < 0)
		rgb.b = 0;
	return (rgb);
}
