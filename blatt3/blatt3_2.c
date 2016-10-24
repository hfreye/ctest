/*
 * blatt3_2.c
 *
 *  Created on: 24.10.2016
 *      Author: henry
 *
 *  Schreiben Sie ein C-Programm, welches neun nacheinander eingegebene Zeichen einliest.
 *  Anschließend soll der Nutzer über die Ziffern 1 bis 9 wählen können, welches Zeichen ausgegeben werden soll.
 *  Hinweis: Benutzen  Sie  zum  Abspeichern  der  Zeichen  ein  sogenanntes char-array,  wobei das englische Wort
 *  'array' hier soviel  bedeutet wie ein Feld von Variablen. Die Anweisung typ feld[anzahl];
 *  defniert ein Feld mit dem Namen feld, welches eine (im Speicher zusammenhängende) Menge von anzahl Variablen des Typs typ
 *  zur Verfügung stellt (z.B. bei dieser Aufgabe: typ = char, anzahl = 9).
 *  Die Variable feld[k] bezeichnet das k-te Element des Feldes, wobei der Index k von 0 bis anzahl-1 läuft.
 *
 */
#include <stdio.h>
/**
 * Hauptroutine
 */
int main(void) {
	// die benötigten Variablen
	char feld[9]; //Array für 9 Character
	int i; //Schleifenzähler
	int zahl; //nummer des angeforderten Elements (1..9)
	char enter; //um das enter bei der Eingabe abzufangen
	// Eingabe
	printf("\n-------------------------------------------\n");
	for (i=0; i<9; i++){//Schleife für i(Index) von 0 bis 8
		printf("Geben Sie bitte das %d. Zeichen ein (Index:%d): ",i+1,i);
		scanf("%c%c", &feld[i], &enter);//i-tes Element einlesen
	}
	printf("\n Welche Zahl soll ausgegeben werden (1.-9.)");
	scanf("%d", &zahl);//Nummer einlesen
	//Ausgabe
	if ((zahl > 0) && (zahl < 10)){//Index muss 0..8 sein -> Zahl 1..9
		printf("\n Das ist das Zeichen %c: \n\n",feld[zahl-1]);
	}else{//Zahl nicht 1..9
		printf("\n Zahl %d außerhalb des Index-Bereichs (1.-9.)\n\n",zahl);
	}
	/*
	//nur für die Kontrolle das Array in gänze ausgeben
	// ggf. / * und unten * / löschen (mehrzeiligen Kommentar aufheben)
	printf("\n--------------------\n Zum Vergleich nochmal alles \n\n");
	for (i=0; i<9; i++){
		printf("feld[%d]=%c \n",i,feld[i]);
	}
	*/
	return (0);
}

