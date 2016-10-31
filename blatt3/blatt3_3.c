/*
 * blatt3_3.c
 *
 *  Created on: 24.10.2016
 *      Author: henry
 *
 *	Das Programm aus Aufgabe 2 soll nun erweitert werden. Wir wollen eine Zeichenkette mit
 *	einer Länge von maximal 20 Zeichen durch eine einzige Eingabe mehrerer Zeichen in den
 *	sogenannten Eingabepuffer einlesen. Das Zeichen für <ENTER> soll dabei als Eingabezeichen
 *	nicht zulässig sein, sondern das Ende der Eingabe der Zeichenkette bedeuten.
 *	Arbeiten Sie zur Verwaltung der einzelnen Zeichen der Zeichenkette mit dem Feld, das durch die
 *	Anweisung char zkette[21] definiert wird. Schreiben Sie ein Programm, in dem zuerst das Feldkette
 *	komplett durch Zeichen mit ASCII-Wert 42 initialisiert wird und danach in einer for-Schleife die einzelnen
 *	Zeichen der eingegebenen Zeichenkette aus dem Eingabepuffer mittels getchar() ausgelesen werden.
 *	Das Intern soll das Zeichen mit dem ASCII-Wert 0 das Ende der Zeichenkette codieren, so dass alle Zeichen, die im Feld
 *	zkette nach diesem Zeichen kommen, ignoriert werden. Anschließend sollen die Zeichenkette, ihre wahre Länge n
 *	sowie das Feld zkette ausgegeben werden.
 *	Hinweis: Finden Sie zunächst den ASCII-Code für <ENTER> heraus.
 */
#include <stdio.h>

/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	char zkette[21]; //Array für 21 Character ?? Warum eigentlich 21 - eigentlich sollte 1..20
	char z; //Hilfvariable für die Eingabe
	int i; //Schleifenzähler
	// der ASCII-Code für <Enter> ist 10
	//Initialisierung von zkette
	for (i=0; i<21; i++){//Schleife für i(Index) von 0 bis 20
		zkette[i] = (char)42;// Zeichen Nummer 42 ist das *
	}
	// Eingabe
	printf("\n-------------------------------------------\n");
	printf("Geben Sie bitte eine Zeichenkette ein: ");
	i=0;
	z=getchar();
	while ((i<21) && (z != EOF)){//Bedingung i<21, und nicht "End Of File"
		zkette[i]=z;
		if (10==z) {break;}
		i++;
		z=getchar();
	}
	//Ausgabe
	i=0;
	while((zkette[i]!=10)&& (i<21)){
		printf("%c, ",zkette[i]);
		i++;
	}
	printf("\n%i Elemnte in der Zeichenkette, ",i); //da i bis zum enter zählt braucht man diesmal kein +1
	//nur für die Kontrolle das Array in gänze ausgeben
	// ggf. / * und unten * / löschen (mehrzeiligen Kommentar aufheben)
	/*
	printf("\n--------------------\n Zum Vergleich nochmal alles \n\n");
	for (i=0; i<21; i++){
		printf("zkette[%d]=%c \n",i,zkette[i]);
	}
	*/
	return (0);
}

