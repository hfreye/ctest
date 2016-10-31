/*
 * blatt3_1.c
 *
 *  Created on: 24.10.2016
 *      Author: henry
 *
 *      Berechnen Sie experimentell die größte ganze Zahl maxshort, die mit dem Datentyp short in C dargestellt werden kann. 
 *		Erhöhen Sie dazu in einer while-Schleife eine short-Variable solange um 1, bis sich ihr Vorzeichen ändert. 
 *		Hinweis: Der Inkrement-Befehl ++.
 *
 */
#include <stdio.h>
/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	short zahl, vorgaenger;
	// keine Eingabe!
	//Ausgabe
	zahl = 0;
	vorgaenger = 0;
	while (vorgaenger * zahl >= 0) {
		vorgaenger = zahl;
		zahl++;
	}
	printf("\n Die größte Zahl: %i und die kleinste: %i \n", vorgaenger, zahl);
	return (0);
}

