#include <stdio.h>
int main(void) {
	// die benötigten Variablen
	int zahl1, zahl2, ergebnis;
	//Eingabeaufforderung
	printf("Dieses Programm kann  zwei  ganze  Zahlen  addieren.\n Geben  Sie  b i t t e  Ihren  ersten Summanden ein :  ");
	scanf("%i", &zahl1);
	printf("Geben  Sie  nun  b i t t e  Ihren  zweiten Summanden ein :  ");
	scanf("%i", &zahl2);
	ergebnis = zahl1 + zahl2;
	printf("Die Summe von %i  und %i  lautet : %i \n\n", zahl1, zahl2,ergebnis);
	return (0);
}
