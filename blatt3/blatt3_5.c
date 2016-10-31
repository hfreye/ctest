/*
 * blatt3_5.c
 *
 *  Created on: 24.10.2016
 *      Author: henry
 *
 *	Erweitern Sie das in Aufgabe 3 erarbeitete Programm um die folgende Funk-tionalität:
 *	Nach der Eingabe der Zeichenkette soll das Programm prüfen, ob und an welchen Stellen das
 *	<LEERZEICHEN> (ASCII-Wert 32) in der Zeichenkette vorkommt. Die eingegebene Zeichenkette und die
 *	Nummern  der  Stellen, an denen das <LEERZEICHEN> steht, sollen ausgegeben werden.
 *	Danach soll die Zeichenkette so verändert werden, dass in der ursprünglichen Zeichenkette jedes
 *	<LEERZEICHEN> durch einen <UNTERSTRICH> '_' ersetzt wird.
 *	Zum Schluß soll die veränderte Zeichenkette ausgegeben werden.
 *
 */
#include <stdio.h>

/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	char zkette[21]; //Array für 21 Character ?? Warum eigentlich 21 - wahrscheinlich soll nur Index 1..20 belegt werden?!
	char z; //Hilfvariable für die Eingabe
	int i; //Schleifenzähler
	//Initialisierung von zkette
	for (i=0; i<21; i++){//Schleife für i(Index) von 0 bis 20
		zkette[i] = (char)42;// Zeichen Nummer 42 ist das *
	}
	// Eingabe
	printf("\n-------------------------------------------\n");
	printf("Geben Sie bitte eine Zeichenkette ein: ");

	i=1;//(oder doch bei 0 beginnen?)
	z=getchar();
	while ((i<21) && (z != EOF)){//Bedingungen sind  (i<21) _und_ (z ist nicht "End Of File")
		printf("%c",z);
		zkette[i]=z;
		if (10 == z) {break;}// der ASCII-Code für <Enter> ist 10
		i++;
		z=getchar();
	}
	//printf("\n --- Ende der Eingabe --- \n"); war nur zum debuggen

	//Stellen mit [LEERZEICHEN] ausgeben und dann durch '_' ersetzen.
	printf("\n");
	i=1;
	while(10 != zkette[i]){
		if (32 == zkette[i]){
			printf("An Stelle %i befindet sich ein \"Leerzeichen\"\n",i);
			zkette[i]= '_';
		}
		i++;
	}
	//Ausgabe am Ende die Zeichenkette
	printf("\n");
	i=1;
	while((i<21) && (10 != zkette[i])){ //solange weder Indexbereich zu Ende, noch "Enter" gefunden
		printf("%c",zkette[i]);
		i++;
	}
	printf("\n\n%i Elemnte in der Zeichenkette, \n\n ===========================\n",i-1); //da i bis zum enter zählt
	//Seltsamer Effekt: Umlaute zählen doppelt!! Evtl. wegen utf8 Codierung??
	return (0);
}

