/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lista_sequencial.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 18:43:13 by tavelino          #+#    #+#             */
/*   Updated: 2018/10/13 18:40:33 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// create structure
struct	pessoa{
	char 	name;
	int		id;
};

void	limpaTela(){
	system("CLS");
}

int		main(){
	int		option;
	struct   	pessoa	*ponteiroSequencial;
	int		listSize;

	listSize = 0;
	option = 1;

	//exemplo
	struct	pessoa	*listaSequencial = (struct pessoa *)malloc(sizeof(struct pessoa));

	while(option < 10 && option > 0){
		printf("Options \n \
				1 - put a node at the beginning of the list\n \
				2 - put a node at the end of the list\n \
				3 - put a node at the position X \n \
				4 - take out a node at the beginning\n \
			   	5 - take out a node at the end of the list\n \
				6 - take out a node at the position X \n \
				7 - Search a node with ID label \n \
				8 - Print my the list\n \
				9 - Exit\n \
				\n \
				Choose a option and press ENTER: ");	
	}
	

	return 0;
}
