/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfarhi <dfarhi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:13:59 by dfarhi            #+#    #+#             */
/*   Updated: 2021/08/05 15:18:58 by dfarhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "../ex04/ft_ultimate_div_mod.c"

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("a : %d , b : %d , ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div : %d , mod : %d\n", a, b);
}
