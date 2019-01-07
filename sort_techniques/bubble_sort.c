/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <tavelino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 22:15:41 by tavelino          #+#    #+#             */
/*   Updated: 2018/12/31 03:30:32 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*********************
 * Ele compara o elemento atual com o seguinte
 * e vai indo do primeiro até o ultimo.. volta para o segundo e vai até ultimo
 * volta para o terceiro e vai até o ultimo..
 * isso até acabar o array
 *
 *********************/

#include <stdio.h>
#define TAM 10

//just check array
void	print_array(int array[]){
	int i;

	i = 0;
	printf("\n");
	while (i < TAM)
	{
		printf("[%d]", array[i]);

		i++;
	}
}


//BubbleSort Function
void	bubble_sort(int array[TAM]){
	int actual;
	int comp;
	int aux;

	actual = 0;
	comp = actual + 1;
	aux = 0;
	while (actual < TAM)
	{
		while (comp < TAM)
		{
			if (array[actual] > array[comp])
			{
				aux = array[actual];
				array[actual] = array[comp];
				array[comp] = aux;
			}
			actual++;
			comp = actual + 1;
		}
		actual++;
	}
}

// main
int	main()
{
	int		array[TAM] = {10,9,8,5,4,7,2,1,3,6};
	print_array(array);
	bubble_sort(array);
	print_array(array);
	return 0;
}
