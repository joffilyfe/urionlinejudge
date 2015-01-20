#include <stdio.h>
#include <string.h>

int findChar(char *frase, char character);

int main(void) {

	char palavra[51];
	int endereco;

	//pega a frase do teclado do usuario
	scanf("%[^\n]s", palavra);
	//envia a frase e um caractere a ser buscado para a funcão
	endereco = findChar(palavra, 'a');

	// acessa o vetor palavra + o deslocamento do I, o * serve pra acessar o 
	// que tem dentro da memoria naquele endereco
	// endereco = indice que retorna da funcao
	printf("%c > %d\n", *(palavra + endereco), endereco);


	return 0;
}

int findChar(char *frase, char character) {

	int i;
	int phraseLen = 0;
	int address = 0;

	// percorro a frase para buscar o tamanho dela
	for (i = 0; frase[i] != '\0';i++);
	phraseLen = i;

	// percorro a frase para buscar o caractere que foi passado
	for (i = 0; (i < phraseLen) && (frase[i] != character) && (frase[i] != '\0'); i++);

	// Se não achar o caractere o retorno será -1
	if (i == phraseLen) {
		i = -1;
	}
	//retorna o deslocamento na memoria do caractere
	return i;
}