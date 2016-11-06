#include <stdio.h>

/**
 * Funktion fakultaet berechnet die Fakultät einer Zahl
 * Parameter:
 * 	- short a - short, weil max 20 erlaubt sind
 * Ergebnis/Rückgabewert
 *
 *  long - weil Fakultäten schnell groß werden
 */

long fakultaet(short a) // Kopf der Funktion 'fakultaet'
{
  if (a == 0) {return 1;}  // Rekursionsanfang: die Fakultät von 0 ist 1
  /* ansonsten rekursiver Aufruf:
   * die Fakultät einer Zahl (>0) ist die Zahl selbst multipliziert mit
   * der Fakultät des Vorgängers der Zahl
   */
  return(a * fakultaet(a-1));
}

int main(void)  // Kopf des Hauptprogramms 'main'
{
  //Variablen festlegen
  short variable = 0;
  
  printf("Dieses Programm berechnet den Wert der Fakultaetsfunktion zu einem von Ihnen eingegebenen Wert.\n\
  Bitte geben Sie Ihren Wert ein: ");
  
  scanf("%hi", &variable);
  
  if(variable < 0)
  {
    printf("Dieser Wert ist unzulaessig.\nWir beenden das Programm.\n\n");
    return(1); // Rueckgabewert '1' von main heisst: 'Fehlerfall'
  }
  
  if(variable > 19)
  {
    printf("Die eingegebene Zahl ist zu gross\n");
    printf("Wir beenden das Programm.\n\n");

    return(1);
  } 
  
  // Ausggabe des Antwortsatzes
  printf("Die Fakultaet von %hi lautet: %li.\n\n",
 	  variable, fakultaet(variable)); // Aufruf der Funktion 'fakultaet'
  
  return(0); // Rueckgabewert '0' von main heisst: 'fehlerfrei'
}
