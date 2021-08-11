/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:16:43 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/11 12:19:42 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex04/ft_fibonacci.c"

int main(void)
{
	int		i;

	i = -3;
	while (i < 10)
	{
		printf("index %d : %d\n", i, ft_fibonacci(i));
		i++;
	}
	return (0);
}
