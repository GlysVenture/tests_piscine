/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:07:16 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/08 13:04:23 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char	*rand_string(unsigned int size)
{
	char	*c;
	unsigned int		i;

	c = (char*)malloc(size * sizeof(char));
	i = 0;
	srand(time(0));
	while(i < size - 1)
	{
		*(c + i) = (rand() % 94) + 32;
		i++;
	}
	*(c + i) = '\0';
	return (c);
}
