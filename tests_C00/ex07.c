/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfarhi <dfarhi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:05:20 by dfarhi            #+#    #+#             */
/*   Updated: 2021/08/05 11:33:37 by dfarhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "../ex07/ft_putnbr.c"

// MAX INT VALUE IN C: 2147483647
int	main(void)
{
	int	n;

	while (1)
	{
		scanf("%d", &n);
		ft_putnbr(n);
		printf("\n");
	}
	return (0);
}
