/*
 * blatt3_4.c
 *
 *  Created on: 24.10.2016
 *      Author: henry
 *
 *  Schreiben Sie eine Funktion double n_Potenz(double x, int n) die  zu  den  Eingabeparametern
 *  x (aus R) und n (aus N) den Rückgabewert n_Potenz = x hoch n berechnet.
 *  Für den Fall, dass der Eingabewert n nicht positiv ist, soll die Funktion eine Fehlernachricht ausgeben.
 *  Schreiben Sie ein zugehöriges Hauptprogramm, in dem x und n eingegeben werden und nach dem Funktionsaufruf der Wert
 *  x hoch n ausgegeben wird.
 *
 */
#include <stdio.h>

double n_potenz(double x, int n){
	double ergebnis = 1;
	if (n <0){
		printf("Fehler: negatives n");
	}else{
		while (n>0){
			ergebnis = ergebnis * x;
			n--;
		}
	}
	return (ergebnis);
}
/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	int n; //Exponent
	double zahl; //Basis
	// Eingabe
	printf("\n-------------------------------------------\n");

	printf("\n Welche Zahl soll potenziert werden ");
	scanf("%lf", &zahl);//Basis einlesen
	printf("\n Welche Potenz (natürliche Zahl!)");
	scanf("%d", &n);//potenz einlesen

	//Ausgabe
	printf("\n %lf hoch %d = %lf \n\n",zahl, n, n_potenz(zahl,n));

	return (0);
}

