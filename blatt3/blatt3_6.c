/*
 * blatt3_4.c
 *
 *  Created on: 24.10.2016
 *      Author: henry
 *
 *  Schreiben Sie ein Hauptprogramm, in welchem eine Gleitpunktzahl x und eine natürliche Zahl n
 *  eingegeben werden und anschließend unter Verwendung der Funktion n_Potenz aus Aufgabe 4 der Wert s
 *  folgender Summe s = 1 + x + x² + x³ + .. x^n berechnet und ausgegeben wird.
 *
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
	double summe;
	// Eingabe
	printf("\n-------------------------------------------\n");

	printf("\n Welche Zahl soll potenziert werden: ");
	scanf("%lf", &zahl);//Basis einlesen
	printf("\n Welche höchste Potenz (natürliche Zahl!) für die Summe: ");
	scanf("%d", &n);//potenz einlesen

	//Ausgabe
	summe = 0;
	while (n >= 0){ //x^0 liefert die 1 vom Anfang der Summe
		//bei negativem n sollte die summe 0 herauskommen - die Funktion n_potenz wird dann garnicht gerufen
		summe += n_potenz(zahl,n);
		n--;
	}
	printf("\n\nSumme = %lf \n\n",summe);

	return (0);
}

