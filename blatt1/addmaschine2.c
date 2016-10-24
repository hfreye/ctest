#include <stdio.h>
int main(void) {
	// die benötigten Variablen
	long zahl1, zahl2, ergebnis;
	//Eingabeaufforderung
	printf("Dieses Programm kann  zwei  ganze  Zahlen  addieren.\n Geben  Sie  b i t t e  Ihren  ersten Summanden ein :  ");
	scanf("%li", &zahl1);
	printf("Geben  Sie  nun  b i t t e  Ihren  zweiten Summanden ein :  ");
	scanf("%li", &zahl2);
	ergebnis = zahl1 + zahl2;
	printf("Die Summe von %li  und %li  lautet : %li \n\n", zahl1, zahl2,ergebnis);
	return (0);
}
