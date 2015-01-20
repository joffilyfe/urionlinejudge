#include <stdio.h>
#include <string.h>


int main(void) {

	char primeiro[51], segundo[51], terceiro[51];

	scanf("%s", primeiro);
	scanf("%s", segundo);
	scanf("%s", terceiro);

	// vertebrado
	if ( (strcmp("vertebrado", primeiro)) == 0) {
		//segundo nivel
		if ( (strcmp("ave", segundo))  == 0) {

			//terceiro nivel
			if ( (strcmp("carnivoro", terceiro)) == 0 ) {
				printf("aguia\n");
			} else {
				printf("pomba\n");
			}
		//é mamifero
		} else {
			//terceiro nivel 
			if ((strcmp("onivoro", terceiro)) == 0) {
				printf("homem\n");
			} else {
				printf("vaca\n");
			}
		}

	// Invertebrado
	} else {

		//Segundo nivel
		if ( (strcmp("inseto", segundo)) == 0 ) {
			//terceiro nivel
			if ( (strcmp("hematofago", terceiro)) == 0) {
				printf("pulga\n");
			} else {
				printf("lagarta\n");
			}
		//segundo nivel (anelideo)
		} else {
			//terceiro nivel
			if ( (strcmp("hematofago", terceiro)) == 0) {
				printf("sanguessuga\n");
			} else {
				printf("minhoca\n");
			}

		}
	}
	return 0;
}