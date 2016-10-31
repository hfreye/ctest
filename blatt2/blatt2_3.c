/*
 * blatt2_3.c
 *
 *  Created on: 24.10.2016
 *  Author: henry
 *
 *     Schreiben Sie ein C-Programm, welches nacheinander drei ganze Zahlen a, b und c einliest und diese dann mit Angabe der Namen der Variablen in absteigender Reihenfolge ausgibt.
 *     Die Bestimmung der Reihenfolge soll mit Hilfe geschachtelter "if-else" Anweisungen erfolgen
 *
 */
#include <stdio.h>
/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	int zahl1, zahl2, zahl3; // drei ganze Zahlen
	//Eingabeaufforderung
	printf(
			"Dieses Programm liest drei Zahlen und gibt sie dann geordnet wieder aus.\n");

	printf("Geben Sie bitte Zahl1 ein: ");
	scanf("%i", &zahl1);
	printf("Geben Sie bitte Zahl2 ein: ");
	scanf("%i", &zahl2);
	printf("Geben Sie bitte Zahl3 ein: ");
	scanf("%i", &zahl3);
	//Ausgabe
	if (zahl1 <= zahl2) {
		if (zahl1 <= zahl3) {
			printf("Zahl1: %d \n", zahl1);
			if (zahl2 <= zahl3) {
				printf("Zahl2: %d \n", zahl2);
				printf("Zahl3: %d \n", zahl3);
			} else {
				printf("Zahl3: %d \n", zahl3);
				printf("Zahl2: %d \n", zahl2);
			}
		} else { // zahl1 <= zahl2 und zahl1 > zahl3
			printf("Zahl3: %d \n", zahl3);
			printf("Zahl1: %d \n", zahl1);
			printf("Zahl2: %d \n", zahl2);
		}
	}else{ //zahl1 > zahl2
		if (zahl2 <= zahl3) {
			printf("Zahl2: %d \n", zahl2);
			if (zahl1 <= zahl3) {
				printf("Zahl1: %d \n", zahl1);
				printf("Zahl3: %d \n", zahl3);
			} else {
				printf("Zahl3: %d \n", zahl3);
				printf("Zahl1: %d \n", zahl1);
			}
		} else { //zahl2 > zahl3 und zahl1 > zahl2
			printf("Zahl3: %d \n", zahl3);
			printf("Zahl2: %d \n", zahl2);
			printf("Zahl1: %d \n", zahl1);
		}
	}
	return (0);
}

