/**
 * Aufgabe 6 Blatt 4
 * @henry, 2016-11-07
 *
 * Ersetzen  Sie  die  geschachtelten if-else-Anweisungen  in  dem  Programm
 * "Taschenrechner1.c" aus der Vorlesung durch switch-case-Anweisungen.
 * Die Wahl der Rechenart soll mit a-s-m-d anstelle
 * von 1-2-3-4 angesteuert werden.
 */

#include <stdio.h>

double addition(double a, double b)  // Kopf der Funktion 'addition'
{
   return(a+b);
}

double subtraktion(double a, double b)  // Kopf der Funktion 'subtraktion'
{
   return(a-b);
}

double multiplikation(double a, double b)  // Kopf der Funktion 'multiplikation'
{
   return(a*b);
}

double division(double a, double b, short *w)  // Kopf der Funktion 'division'
{
  if(b<0.00000001 && b>-0.00000001) // der Fall:  |b| < 1e-8
  {
    *w=1;  // hier wird der Wert von 'w' veraendert
    return(0); // Rüuckgabewert ist sinnlos hier
  }
  else
  {
   return(a/b);
  }
}


int main(void)  // Kopf des Hauptprogramms 'main'
{
  double zahl1, zahl2,ergebnis;
  short warnung=0;
  char wahl=' ';

  printf("Dieses Programm kann die Grundrechenarten auf zwei Zahlen anwenden.\n");
  printf("Geben Sie bitte Ihre erste Zahl ein: ");

  scanf("%lf",&zahl1);
  
  printf("Geben Sie nun bitte Ihre zweite Zahl ein: ");

  scanf("%lf",&zahl2);
  
  printf("Nun kommt die Wahl der Rechenart. Bitte geben Sie ein:\n\
	   a für Addition,\n\
	   s für Subtraktion,\n\
	   m für Multiplikation,\n\
	   d für Division.\nIhre Wahl: ");
  scanf("%c",&wahl);
  
  if(wahl==(int)'a')
  {
    ergebnis=addition(zahl1,zahl2);
  }
  else if(wahl==(int)'s')
  {
    ergebnis=subtraktion(zahl1,zahl2);
  }
  else if(wahl==(int)'m')
  {
    ergebnis=multiplikation(zahl1,zahl2);
  }
  else if(wahl==(int)'d')
  {
    // Achtung: Wert von 'warnung' kann ver"andert werden
    ergebnis=division(zahl1,zahl2,&warnung);
  }
  else
  {
    printf("Wegen Ihrer unzulaessigen Wahl wird das Programm beendet.\n");
    return(1);
  }

  
  if(warnung==0) // keine Divisions-Warnung
  {
    printf("Das Ergebnis der ");

    if(wahl==(int)'a')
    {
 	printf("Addition");
    }
    else if(wahl==(int)'s')
    {
      printf("Subtraktion");
    }
    else if(wahl==(int)'m')
    {
      printf("Multiplikation");
    }
    else
    {
      printf("Division");
    }
  }
  else  // Divisions-Warnung
  {
    printf("Die Division konnte wegen eines zu kleinen Nenners nicht durchgefuehrt werden.\n");
  }

  // Ausgabe des Ergebnisses
  printf(" von %10.5lf und %10.10lf lautet: %10.10lf.\n\n",zahl1,zahl2,ergebnis);

  // Kommentar zu Rundungsfehlern
  if (   zahl1>1e9  // overflow positiv
	|| zahl1<-1e9 // overflow negativ
	|| ( zahl1<1e-8 && zahl1>-1e-8 ) // underflow von 'zahl1'
	|| ( zahl2<1e-8 && zahl2>-1e-8 )
	|| zahl2>1e9
	|| zahl2<-1e9 )
  {
    printf("Sie muessen damit rechnen, dass dieses Ergebnis wegen der Groesse der Zahlen\nmit Rundungsfehlern\
   behaftet ist.\n");
  }
  else
  {
    printf("Dieses Ergebnis wird durch Rundungsfehler\
   nicht wesentlich verfaelscht.\n");
  }
  
  return(0); // Rüuckgabewert von 'main'

}
