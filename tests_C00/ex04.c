/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfarhi <dfarhi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:57:26 by dfarhi            #+#    #+#             */
/*   Updated: 2021/08/04 13:04:00 by dfarhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include "../ex04/ft_is_negative.c"

int	main(void)
{
	int	n;

	while (1)
	{
		scanf("%d", &n);
		ft_is_negative(n);
		printf("\n");
	}
	return (0);
}
