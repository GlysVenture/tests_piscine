/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfarhi <dfarhi@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:17:08 by dfarhi            #+#    #+#             */
/*   Updated: 2021/08/05 14:56:22 by dfarhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "../ex01/ft_ultimate_ft.c"

int	main(void)
{
	int	n;
	int	*n_ptr;
	int	**n_ptr_ptr;
	int	***n_ptr_ptr_ptr;
	int	****n_ptr_ptr_ptr_ptr;
	int	*****n_ptr_ptr_ptr_ptr_ptr;
	int	******n_ptr_ptr_ptr_ptr_ptr_ptr;
	int	*******n_ptr_ptr_ptr_ptr_ptr_ptr_ptr;
	int	********n_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr;

	n = 0;
	n_ptr = &n;
	n_ptr_ptr = &n_ptr;
	n_ptr_ptr_ptr = &n_ptr_ptr;
	n_ptr_ptr_ptr_ptr = &n_ptr_ptr_ptr;
	n_ptr_ptr_ptr_ptr_ptr = &n_ptr_ptr_ptr_ptr;
	n_ptr_ptr_ptr_ptr_ptr_ptr = &n_ptr_ptr_ptr_ptr_ptr;
	n_ptr_ptr_ptr_ptr_ptr_ptr_ptr = &n_ptr_ptr_ptr_ptr_ptr_ptr;
	n_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr = &n_ptr_ptr_ptr_ptr_ptr_ptr_ptr;
	ft_ultimate_ft(&n_ptr_ptr_ptr_ptr_ptr_ptr_ptr_ptr);
	printf("%d", n);
}
