#include <stdio.h>

long fakultaet(short a) // Kopf der Funktion 'fakultaet'
{
  if (a == 0) {return 1;}   
  return(fakultaet(a-1)*a); 
  // rekursiver aufruf f(a) = f(a-1)*a - mit dem Anfag bei a=0, da ist f=1 [f soll fakultät bedeuten) 
}

int main(void)  // Kopf des Hauptprogramms 'main'
{
  short variable=0;
  
  printf("Dieses Programm berechnet den Wert der Fakultaetsfunktion zu einem von Ihnen eingegebenen Wert.\n\
  Bitte geben Sie Ihren Wert ein: ");
  
  scanf("%hi", &variable);
  
  if(variable<0)
  {
    printf("Dieser Wert ist unzulaessig. Wir beenden das Programm.\n\n"); 
    return(1); // Rueckgabewert '1' von main heisst: 'Fehlerfall'
  }
  
  if(variable>19)
  {
    printf("Die eingegebene Zahl ist zu gross; das kann unser Computer nicht.\n\
Wir beenden das Programm.\n\n"); 
    return(1);
  } 
  
  // Ausggabe des Antwortsatzes
  printf("Die Fakultaet von %hi lautet:\n %li.\n\n",
 	  variable, fakultaet(variable)); // Aufruf der Funktion 'fakultaet'
  
  return(0); // Rueckgabewert '0' von main heisst: 'fehlerfrei'
}
