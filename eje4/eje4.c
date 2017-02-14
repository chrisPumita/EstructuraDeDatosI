#include <stdio.h>
#include <string.h>
#define longChar 20
/*CADENAS Escriba un programa que lea dos cadenas
y las concatene en otra. Convierta la cadena conca_
tenada a mayusculas antes de imprimirla en la pantalla.
Tip: PUede utilizar la función toupper(), y para evitar
 problemas con las letras del alfabeto español, escoja
 palabras sin acentos o en ingles.
*/
int main(void)
{
	char cadena1[longChar];
	char *cad1;
	cad1 = cadena1;

	char cadena2[longChar];

	char cadena3[longChar];

	printf("Ingrese primera palabra menor a 20 caracteres\n\b");
	scanf("%s",&cadena1);
	printf("Ingrese segunda lapabra menor a 20 caracteres\n");
	scanf("%s",&cadena2);
	strcpy(cadena3, cadena1);
	strcat(cadena3, " ");
	strcat(cadena3, cadena2);
	//strcpy(cadena3, cadena2);

	printf("Tu frase completa: %s\n",cadena3);
	return 0;
}
