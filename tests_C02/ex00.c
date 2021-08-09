/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:02:50 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/08 17:02:48 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../ex00/ft_strcpy.c"

int	main(void)
{
	char	s[42];
	char	*d;
	char	*r;

	d = (char*)malloc(43 * sizeof(char));
	printf("Enter string (max 42 char): ");
	scanf("%s", s);
	r = ft_strcpy(d, s);
	printf("destination : %s | return : %s\n", d, r);
	free(d);
	d = (char*)malloc(43 * sizeof(char));
	printf("strcpy : %s\n", strcpy(d, s));
	free(d);
	return(0);
}
