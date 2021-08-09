/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfarhi <dfarhi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:37:18 by dfarhi            #+#    #+#             */
/*   Updated: 2021/08/04 13:06:42 by dfarhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include "../ex00/ft_putchar.c"

int	main(void)
{
	char	c;

	while (1)
	{
		scanf("%c", &c);
		ft_putchar(c);
	}
	return (0);
}
