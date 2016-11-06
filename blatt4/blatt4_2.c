/*
 * blatt4_2.c
 *
 *  Created on: 2016-11-06
 *      Author: henry

 * Schreiben Sie ein Hauptprogramm und eine Funktion wurzeln, in dem der Funktionsaufruf
 * w = wurzeln(a, n); zu gegebenem a (R) n (N) den Wert von n ineinandergeschachtelten
 * Wurzeln aus a plus Wurzel ... plus Wurzel a
 * Die Funktion wurzeln soll dabei rekursiv programmiert werden, d.h. die Berechnung
 * von w = wurzeln(a,n); soll auf die Berechnung von w1 = wurzeln(a,n-1); zurückgeführt werden.
 * Experimentieren Sie mit a=2 und großen Werten von n
 *
 */
#include <stdio.h>
#include <math.h> // für die Wurzelberechnung
// man muss mit dem Parameter "-lm" compilieren!!! sonst meckert "er" über das sqrt: "Nicht definierter Verweis auf `sqrt'"

/**Funktion wurzeln: rekursive Berechnung der "Kettenwurzel"
 * Parameter:
 *  - double a
 *  - int n 	Anzahl der Wurzeln
 *  - Rückgabewert: double
 */
double wurzeln(double a, int n ){
	if (n <= 0 || a < 0) { // a und n negativ soll nicht auftreten (verboten)/ wenn n=0, dann a selbst zurück (keine Wurzeln ... ?)
		return a;
	}
	if (1 == n){ //Rekursionsanfang
		// ich schreibe 1 == n, weil dann der Compiler meckert, wenn ich aus vesehen nur ein Gleichheitszeichen schreibe 1 = n (Zuweisung)
		// natürlich kannst du das ""lesbarere"" n == 1 schreiben
		return sqrt(a);
	}
	//wenn größer als 1, dann tiefer in die Rekursion mit verkleinertem n

	return sqrt(a + wurzeln(a, n-1));
}

/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	long n ; //Anzahl der Wurzeln
	// long weil ich dachte n muss GROSS sein (siehe aufgabenstellung) aber schon ab n=20 ist ende mit der Genauigkeit (bei normaler Ausgabe), darum reicht auch locker int!
	double a, w; // Basis und Wurzel
	//nur für die automatischen experimente
	int anfang,ende;
	//Ich soll mit Basis 2 und großen n experimentieren, das lassen wir mal gleich den Rechner machen
	/* Dann brauche ich eine andere Eingabe!*/
	printf("\n----------------------------------------------------------------\n");
	printf("\n mit welchem n beginnen?");
	scanf("%d", &anfang);//Anfang des experiments einlesen
	printf("\n Bis zu welchem n?");
	scanf("%d", &ende);//Ende des Experiments einlesen
	//sinnvolle Eingabnen z.B. 1 und 30

	//Funktionsaufruf - jetzt eine Schleife
	a = 2; //fest für das Experiment
	for (n = anfang; n <= ende; n++){
		w = wurzeln(a, n);
		//Ausgabe
		//printf("\n Das Ergebnis ist: %f \n\n", w);
		printf("\n Das Ergebnis ist: %.17g ", w); //Für max. Kommastellen
	}
	return (0);
}

