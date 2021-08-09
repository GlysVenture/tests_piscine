/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfarhi <dfarhi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:19:41 by dfarhi            #+#    #+#             */
/*   Updated: 2021/08/05 17:27:58 by dfarhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "../ex06/ft_strlen.c"

int	main(void)
{
	printf("Expected 4  , result : %d\n", ft_strlen("1234"));
	printf("Expected 10 , result : %d\n", ft_strlen("0123456789"));
	printf("Expected 7  , result : %d\n", ft_strlen("abcdefg"));
}
