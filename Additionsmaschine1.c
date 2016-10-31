#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 // Deklaration von Variablen
 int zahl1, zahl2, ergebnis;

 // Anfangstext ausgeben
 printf("Dieses Programm kann zwei ganze Zahlen addieren.\n");
 printf("==================================================================\n");

 // Einlesen der Zahlen
 printf(" Geben Sie bitte Ihren ersten Summanden ein ...........: ");
 scanf("%i",&zahl1);  // Einlesen von 'zahl1'

 printf(" Geben Sie nun bitte Ihren zweiten Summanden ein ......: ");
 scanf("%i",&zahl2);

 // Berechnung
 ergebnis = zahl1+zahl2;

 // Ergebnis ausgeben
 printf("\n Die Summe von %i und %i lautet: %i.\n",zahl1,zahl2,ergebnis);
 printf("==================================================================\n");

 return(0);  // R"uckgabewert 0 hei"st:  keine Fehler
}
