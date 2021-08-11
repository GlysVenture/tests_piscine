/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:14:15 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/11 12:15:17 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex03/ft_recursive_power.c"

int main(void)
{
	printf("expected : 125 | result : %d\n", ft_recursive_power(5, 3));
	printf("expected : -125 | result : %d\n", ft_recursive_power(-5, 3));
	printf("expected : 1 | result : %d\n", ft_recursive_power(0, 0));
	printf("expected : 1 | result : %d\n", ft_recursive_power(5, 0));
	printf("expected : 0 | result : %d\n", ft_recursive_power(5, -5));
	return (0);
}
