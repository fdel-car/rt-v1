/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 15:18:18 by fdel-car          #+#    #+#             */
/*   Updated: 2016/07/26 15:18:19 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

int		ft_close(void)
{
	exit(0);
}

int		ft_key(int keycode, t_glob *gl)
{
	if (keycode == 53)
		ft_close();
	(void)gl;
	return (0);
}