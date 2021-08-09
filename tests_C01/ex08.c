/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfarhi <dfarhi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:16:54 by dfarhi            #+#    #+#             */
/*   Updated: 2021/08/07 16:28:11 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "../ex08/ft_sort_int_tab.c"

void	print_array(int tab[], int size);

int	main(void)
{
	int	tab[] = {0, 99, 2, -10, 4, 9, 9, 808, 42, 9};
	int	tab1[] = {3, 2, 1};

	printf("Original : ");
	print_array(tab, 10);
	ft_sort_int_tab(tab, 10);
	printf("\nSorted : ");
	print_array(tab, 10);
	printf("\nOriginal : ");
	print_array(tab1, 3);
	ft_sort_int_tab(tab1, 3);
	printf("\nSorted : ");
	print_array(tab1, 3);
}

void	print_array(int tab[], int size)
{	
	int	i;

	i = -1;
	while (++i < size)
		printf("%d  ", tab[i]);
}
