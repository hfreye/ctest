/*
 * blatt2_2.c
 *
 *  Created on: 24.10.2016
 *      Author: henry
 */
#include <stdio.h>
/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	char z1,z2,z3,z4,enter; //vier einzelne Zeichen (Character)
	//Eingabeaufforderung
	printf(
			"Dieses Programm liest vier Zeichen und gibt sie dann wieder aus.\n");
	//Eingabe wie gefordert
	//Weil das Enter der Eingabe auch ein Zeichen muss, muss man das abfangen
	//So bekommt man nur das erste und dritte
	/*
	printf("Geben Sie bitte ein 1. Zeichen ein: ");
	z1 = getchar();
	printf("Geben Sie bitte ein 2. Zeichen ein: ");
	z2 = getchar();
	printf("Geben Sie bitte ein 3. Zeichen ein: ");
	z3 = getchar();
	printf("Geben Sie bitte ein 4. Zeichen ein: ");
	z4 = getchar();
	*/
	//Kann ich nur mit scanf !???
	//Eingabe
	printf("Geben Sie bitte ein 1. Zeichen ein: ");
	scanf("%c%c", &z1, &enter);
	printf("Geben Sie bitte ein 2. Zeichen ein: ");
	scanf("%c%c", &z2, &enter);
	printf("Geben Sie bitte ein 3. Zeichen ein: ");
	scanf("%c%c", &z3, &enter);
	printf("Geben Sie bitte ein 4. Zeichen ein: ");
	scanf("%c%c", &z4, &enter);
	//Ausgabe
	printf("Der ASCII-Code Ihrer Eingabe lautete: %c %c %c %c \n\n",z1,z2,z3,z4);
	return (0);
}

