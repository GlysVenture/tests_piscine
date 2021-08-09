/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfarhi <dfarhi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:33:15 by dfarhi            #+#    #+#             */
/*   Updated: 2021/08/05 18:13:49 by dfarhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "../ex07/ft_rev_int_tab.c"

void	print_array(int tab[], int size);

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	tab1[] = {1, 2, 3};

	printf("Original : ");
	print_array(tab, 10);
	ft_rev_int_tab(tab, 10);
	printf("\nInverted : ");
	print_array(tab, 10);
	printf("\nOriginal : ");
	print_array(tab1, 3);
	ft_rev_int_tab(tab1, 3);
	printf("\nInverted : ");
	print_array(tab1, 3);
}

void	print_array(int tab[], int size)
{	
	int	i;

	i = -1;
	while (++i < size)
		printf("%d", tab[i]);
}
