/*
 * blatt2_1.c
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
	char z; //ein einzelnes Zeichen (Character)
	//Eingabeaufforderung
	printf(
			"Dieses Programm kann liefert zu einem Zeichen den SCII-Wert\nGeben Sie bitte ein Zeichen ein: ");
	//Eingabe eines Zeichens
	z = getchar();
	//Ausgabe
	printf("Der ASCCII-Code Ihrer Eingabe %c lautet : %d \n\n",z,z);
	return (0);
}

