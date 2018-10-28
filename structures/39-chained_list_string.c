/******************************************************************************************** */
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

// create structure
struct	estrutura{
	char nome;
	int	id;
	struct estrutura *proximo; //ponteiro para o proximo endereco da lista
};

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
//main
int		main(){
   	
   	// cria a lista
   	struct estrutura *ponteiroEncadeado; // esseé o ponteiro nao o valor
//   	estrutura *novoPrimeiroValor // esse é onde vai o valor
	//exemplo criar inivio da lista
	struct estrutura	*novoPrimeiroValor = (struct estrutura*)malloc(sizeof(struct estrutura));
	novoPrimeiroValor->nome = *strcpy(strnew(5), "thais");
	novoPrimeiroValor->id = 13;
	novoPrimeiroValor->proximo = NULL;
	
	//faz o ponteiro d encadeada apontar ao primeiro valor, pq nao tem nada ainda.
	ponteiroEncadeado = novoPrimeiroValor; //agora ele sabe onde comeca a lista

	// imprime lista
	printf("teste um valor \n%d %s\n", novoPrimeiroValor->id, &novoPrimeiroValor->nome);

	//Cria segundo valor
	struct estrutura	*novoSegundoValor = (struct estrutura*)malloc(sizeof(struct estrutura));
	novoSegundoValor->id=20;
	novoSegundoValor->proximo = NULL;
	
	//pega de novo o ponteiro e faz ele apontar ao segundo valor, assim junta eles com encadeamento
	ponteiroEncadeado->proximo = novoSegundoValor;

	//imrpimir lista encadeada
	while(ponteiroEncadeado != NULL){ //vai andar na lista até o ultimo.. o ultimo é o com ponteiro NULL
		printf("\nvalor %d", ponteiroEncadeado->id); // vai mostrar o id
		ponteiroEncadeado = ponteiroEncadeado->proximo; //agora ele vai pegar o proximo endereço
	}

	return 0;
}
