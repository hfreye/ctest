/*
 * blatt4_3.c
 *
 *  Created on: 2016-11-06
 *      Author: henry
 *
 *
 */
#include <stdio.h>
#include <math.h> //Nicht vergessen: mit "-lm" compilieren

/**Funktion
 * Parameter:
 *  - double a
 *  - int n 	Anzahl der Wurzeln
 *  - Rückgabewert: double
 */
void rundungsfehler(double x, double y ){
	float xf = (float) x;
	float yf = (float) y;
	double dx, dy, summef, differenzf, produktf, quotientf, dsumme, ddifferenz, dprodukt, dquotient;
	// vorne d = absolute Differenzen = Ergebnisse - hinten f für float
	//Berechnungen
	dx = fabs(x - xf);
	dy = fabs(y - yf);
	summef 		= (float) (xf + yf);
	dsumme 		= fabs((x + y) - summef);
	differenzf 	= (float) (xf - yf);
	ddifferenz 	= fabs((x - y) - differenzf);
	produktf 	= (float) (xf * yf);
	dprodukt 	= fabs((x * y) - produktf);
	quotientf 	= (float) (xf / yf);
	dquotient 	= fabs((x+y) - quotientf);


	//Ausgabe
	printf("\n----------------------------------------------------------------\n");
	printf("x-xf= %lf \n", dx);
	printf("y-yf= %lf \n", dy);
	printf("Fehler der Summe %lf \n", dsumme);
	printf("Fehler der Differenz %lf \n", ddifferenz);
	printf("Fehler des Produkts %lf \n", dprodukt);
	printf("Fehler des Quotients %lf \n", dquotient);
}

/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	double x, y;

	printf("\n----------------------------------------------------------------\n");
	printf("\n erste Zahl (x)?");
	scanf("%lf", &x);
	printf("\n zweite Zahl (y)?");
	scanf("%lf", &y);

	//Funktionsaufruf

	rundungsfehler(x, y);

	//Ausgabe nur in der Funktion?!
	printf("================================================================\n\n");

	/* interessanter Test z. B.
	 * 12345.12345 und 12345.12354
	 */

	return (0);
}

