
/*                                                                                            */
/*       curso Udemy Estrutura de dados                                                       */
/* https://www.udemy.com/linguagem-c-estrutura-de-dados-ordenacao-e-busca/learn/v4/content    */
/*                                                                                            */
/*                                                                                            */
/* ****************************************************************************************** */

// C++ library we could use
//String - to use string, other wise you need to use ft_strnew to make a caracteres array and alloc memmory
//new - to dont need to malloc
//iostream - to not use printf scanf anduse cout
// stdlib - para usar o system e limpar a tela do menu
//seria:
// #iclude <iostream>
// #include <new>
// #include <string>
// #include <stdlib.h>

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> //write

// create structure
struct		pessoa{
	char *nome;
	int	rg;
	struct 	pessoa	*proximo; //ponteiro para o proximo endereco da lista
};

// function to clean 
void	limpaTela(){
//	system("CLS");
}

// minhas funcoes
// função que pega o tamanho da string
size_t	strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
// função para criar o array de caracteres e fazer a string.. afinal estou usando C e nao C++
char	*strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!(new = (char*)malloc(sizeof(*new) * size + 1)))
		return (NULL);
	while (i <= size)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
// coloca dados na string
char	*strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
// imprime a string
void	putstr(char const *s)
{
	write(1, s, strlen(s));
}
//*** fim minhas funcoes

// funcoes da aula
// imprimir lista
void imprimeEncadeada (struct pessoa *ponteiroEncadeada){
	//percorre a lista e imprime os elementos
	struct pessoa	*p = ponteiroEncadeada;
	
	while (p != NULL){
		printf("tamanho do nome %lu\n nome: %s", strlen(p->nome), p->nome);
		//verificar pq nao imprimiu nada com  putstr(p->nome);
		printf(", rg: %d\n", p->rg);
		p = p->proximo;
	}
}

//função que mostra Tamanho da Lista
int		lst_size(struct pessoa *ponteiroEncadeada){
	//percorre a lista e conta quantos elementos tem na lista
	struct pessoa	*p = ponteiroEncadeada;
	int		size;

	size = 0;
	while (p != NULL){
		size++;
		p = p->proximo;
	}
	return (size);
}

//função para adicionar node no comeco da lista
void	addComecoEncadeada(struct pessoa **ponteiroEncadeada, char *name, int id){
	//1 cria novo registro na estrutura
	struct pessoa *novoValor = (struct pessoa*)malloc(sizeof(struct pessoa));
	novoValor->nome = strcpy(strnew(strlen(name)), name);
	novoValor->rg = id;
	novoValor->proximo = *ponteiroEncadeada; //ponteiro para a lista para poder fazer ele receber o memoria1 primeiro membro da lista
	//redirecione o ponteiro principal para apontar para o novo valor
	*ponteiroEncadeada = novoValor;
}

//main
int		main(){
	int		option;
	int		tamanhoLista;
	char	*insert_name; // para guardar o que o usuario passar
	int 	insert_id = 0; // para guardar o que o usuario passar
   	// ---------- Manipulando  lista ----------
   	//Cria o inío da lista encasdeada
	struct pessoa *ponteiroEncadeada; //ponteiro principal mostra primeiro da lista

	//Cria o primeiro valor
	struct pessoa *novoPrimeiroValor = (struct pessoa*)malloc(sizeof(struct pessoa));
	novoPrimeiroValor->nome = strcpy(strnew(strlen("John")), "John");
	novoPrimeiroValor->rg = 123001247;
	novoPrimeiroValor->proximo = NULL; 

	//tranformar o primeiro do inicio da lista em um novo vlor
	ponteiroEncadeada = novoPrimeiroValor;
	// agora tem uma lista de tamanho 1

	//Cria o segundo valor
	struct pessoa *novoSegundoValor = (struct pessoa*)malloc(sizeof(struct pessoa));
	novoSegundoValor->nome = strcpy(strnew(strlen("thais")),"thais");
	novoSegundoValor->rg = 125625657;
	novoSegundoValor->proximo = NULL;

	novoPrimeiroValor->proximo = novoSegundoValor;
	//-------------------------------------

	//Imprimir lista
	imprimeEncadeada(ponteiroEncadeada);

	tamanhoLista = lst_size(ponteiroEncadeada);
	option = 0;

		// ********** MENU ********** //
	while(option < 9 && option >= 0){ //aqui coloca menor que 9, pq SE for 9 ele sai
		printf("\n tamanho atual da lista: %d\n \
				Options \n \
				1 - Add a node at the Beginning of the list\n \
				2 - Add a node at the End of the list\n \
				3 - Add a node at the Position X \n \
				4 - Remove a node from the Beginning\n \
			   	5 - Remove a node from the End of the list\n \
				6 - Remove a node from the Position X \n \
				7 - Search a name with this ID number: \n \
				8 - Print my the list\n \
				9 - Exit\n", tamanhoLista);

		printf("Choose an option:");
		scanf("%d", &option);

		limpaTela();

		//Ações para cada opção escolhida
		switch(option)
		{
			case 1:
				printf("opção 1 escolhida - inserir Novo node no inicio da lista \n" );
				printf("\nInsert the Name: ");
				insert_name = scanf("%s", strcpy(strnew(strlen(insert_name)), insert_name));
				printf("%s", insert_name);
				printf("\nInsert the ID: ");
				scanf(" %d", &insert_id);
				addComecoEncadeada(&ponteiroEncadeada, insert_name, insert_id);
				imprimeEncadeada(ponteiroEncadeada);
				break;
			case 2:
				printf("opção 2 escolhida\n");

				break;
			case 3:
				printf("opção 3 escolhida\n");

				break;
			case 4:
				printf("opção 4 escolhida\n");

				break;
			case 5:
				printf("opção 5 escolhida\n");

				break;
			case 6:
				printf("opção 6 escolhida\n");

				break;
			case 7:
				printf("opção 7 escolhida\n");

				break;
			case 8:
				printf("opção 8 escolhida\n");

				break;
		}
	}
		
	return 0;
}
