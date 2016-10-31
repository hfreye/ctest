/*
 * blatt2_4.c
 *
 *  Created on: 24.10.2016
 *      Author: henry
 *
 *      Schreiben Sie ein C-Programm, welches vier Zeichen einliest und danach pruft,
 *      ob ein fünftes eingegebenes Zeichen unter den ersten vier Zeichen war.
 *      Gibt es einen Treffer, so sollen die Nummer des betreffenden Zeichens, dieses Zeichen selbst
 *      und danach die restlichen Zeichen ausgegeben werden.
 *      Ansonsten soll ausgegeben werden, dass das Zeichen nicht vorkommt und welches die vier eingegebenen Zeichen waren.
 *      Verwenden Sie bei der Programmierung die Kontrollstruktur "if-else".
 *
 */
#include <stdio.h>
/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	char z1,z2,z3,z4,vergleich,enter; //vier plus ein Zeichen (Character)
	//Eingabeaufforderung
	printf("Dieses Programm liest vier Zeichen .\n");
	//Eingabe
	printf("Geben Sie bitte ein 1. Zeichen ein: ");
	scanf("%c%c", &z1, &enter);
	printf("Geben Sie bitte ein 2. Zeichen ein: ");
	scanf("%c%c", &z2, &enter);
	printf("Geben Sie bitte ein 3. Zeichen ein: ");
	scanf("%c%c", &z3, &enter);
	printf("Geben Sie bitte ein 4. Zeichen ein: ");
	scanf("%c%c", &z4, &enter);
	printf("Geben Sie bitte ein Zeichen zum vergleichen ein: ");
	scanf("%c%c", &vergleich, &enter);
	//Ausgabe

	if (vergleich == z1){
		printf("Es gab einen Treffer. Nummer 1:%c  der Rest: %c %c %c \n\n",z1,z2,z3,z4);
	}else{
		if (vergleich == z2){
			printf("Es gab einen Treffer. Nummer 2:%c  der Rest: %c %c %c \n\n",z2,z1,z3,z4);
		}else{
			if (vergleich == z3){
				printf("Es gab einen Treffer. Nummer 3:%c  der Rest: %c %c %c \n\n",z3,z1,z2,z4);
			}else{
				if (vergleich == z4){
					printf("Es gab einen Treffer. Nummer 4:%c  der Rest: %c %c %c \n\n",z4,z1,z2,z3);
				}else{
					printf("Es gab keinen Treffer mit (%c): %c %c %c %c \n\n",vergleich,z1,z2,z3,z4);
				}
			}
		}

	}
	return (0);
}

