/*
 * blatt4_1.c
 *
 *  Created on: 2016-11-06
 *      Author: henry
 *
 *	Seien x; y Vektoren mit ...
 *	Schreiben Sie eine Funktion "VektorSumme" und ein Hauptprogramm, worin für n=10 die
 *	Vektoren x und y als Felder vom Typ int codiert werden und ein entsprechendes Feld
 *	für den Vektor z := x + y durch den Funktionsaufruf VektorSumme(z, x, y, n);
 *	berechnet wird. Die Komponenten der Vektoren x; y; z sollen am Ende zeilenweise
 *  in tabellarischer Form ausgegeben werden.
 *
 *
 */
#include <stdio.h>

/**Funktion VektorSumme
 *
 * Parameter:
 *  z zu bildende Summe (bei Feldern immer automatisch "call by referenz" => deshalb wirkt sich die Änderung
 *  						in der Funktion auch im Hauptprogramm aus)
 *  x ein Feld vom int-Werten als Vektor
 *  y ein Feld vom int-Werten als Vektor
 * 	n länge der Felder (Dimensionen des Vektors)
 * 	kein Rückgabewert
 */
void VektorSumme(int z[], int x[], int y[], int n ){
	while (n>0){//solange die Anzahl der Elemente größer Null
		n--; // zuerst eine "Stelle" zurück (der größte Index ist eins kleiner als n , wenn man 1 Element hat ist der Index 0
		z[n] = x[n] + y[n];
	}
}
/* nur zur schnellen Kontrolle - Vektoren verkehrtherum untereinander
void printIntVektor(int x[], int n ){
	printf("\n [");
	while (n>0){//solange die Anzahl der Elemente größer Null
		n--; // zuerst eine "Stelle" zurück (der größte Index ist eins kleiner als n , wenn man 1 Element hat ist der Index 0
		printf("%i",x[n]);
		if (n>0) { //außer beim "letzten" -> Komma ran
			printf(", ");
		}
	}
	printf("]\n");
}
*/
/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	int n = 10; //Anzahl der Dimensionen des Vektors
	int i; //Hilfsvariable für die Schleifen
	int x[n], y[n], z[n]; //Vektoren

	//Initialisierung von x und y
	for (i = 0; i < n; i++){//Schleife für i(Index) von 0 bis 9
		x[i] = i*i;			// xi=i²
		y[i] = 2*i + 1;		// yi=2i+1
	}

	VektorSumme(z, x, y, n);

	//Ausgabe am Ende die Zeichenkette
	//printIntVektor(x,n);
	//printIntVektor(y,n);
	//printIntVektor(z,n);

	/*  Was heißt zeilenweise tabellarisch */
	/*
		 * Variante 1
		 *  - jede Zeile ein Vektor
		 */

		printf("\n   x = [");
		for (i = 0; i < n; i++){
			if (i >0 ) { //außer beim "ersten" -> Komma (vor)ran
				printf(", ");
			}
			printf("%5i",x[i]);  //%5i bedeuted 5 Stellen Platz für die Zahl (rechtsbündig)
		}
		printf("]\n");


		printf("\n   y = [");
		for (i = 0; i < n; i++){
			if (i >0 ) { //außer beim "ersten" -> Komma (vor)ran
				printf(", ");
			}
			printf("%5i",y[i]);
		}
		printf("]\n");


		printf("\n z=x+y [");
		for (i = 0; i < n; i++){
			if (i >0 ) { //außer beim "ersten" -> Komma (vor)ran
				printf(", ");
			}
			printf("%5i",z[i]);
		}
		printf("]\n");


		/*
		 * Variante 2
		 *  - jede Spalte ein Vektor trotzdem zeilenweise ausgegeben ;-)
		 *  schafft man mit einer Schleife
		 */
		printf("\n----------------------------------------------------------------\n");
		printf("\n      x      y  z=x+y\n");

		for (i = 0; i < n; i++){
			printf("%7i",x[i]);
			printf("%7i",y[i]);
			printf("%7i\n",z[i]);
		}

	return (0);
}

