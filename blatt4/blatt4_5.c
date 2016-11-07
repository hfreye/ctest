#include <stdio.h>

/**
 *
 * 2016-11-07
 *
 * @author henry
 *
 * Zu gegebenen natürlichen Zahlen n und k bezeichne ggT(n,k) den größten
 * gemeinsamen Teiler von n und k, d.h. die größte natürliche Zahl g,
 * die sowohl ein Teiler von n als auch ein Teiler von k ist.
 * Schreiben Sie eine Funktion ggt und ein Programm, welches zu zwei
 * einzugebenden  natürlichen Zahlen n und k ihren  größten  gemeinsamen
 * Teiler g über den Funktionsaufruf g = ggT(n,k); bestimmt und anschließend
 * n,k und g ausgibt. Innerhalb der Funktion ggt soll der zu bestimmende Wert
 * g ermittelt werden, indem systematisch alle theoretisch möglichen Zahlen
 * hinsichtlich  Teilbarkeit  bzgl. n und k geprüft werden.
 * Nutzen  Sie  zur  Untersuchung  auf Teilbarkeit den Operator %, der mit
 * a%b für zwei ganze Zahlen a und b den Rest bei der Division von a durch
 * b bestimmt (Beispiel 5%3=2).
 *
 */

int ggt(int n, int k) // Kopf der Funktion 'fakultaet'
{
  int i; 			//Zählvariable
  int teiler; 		//Teiler von und k

  if ((0 == n) || (0 == k)){return 0;}  //Da man durch null nicht teilen sollte

  // ich probiere alle Zahlen kleiner gleich n _und_ k durch
  // wenn ich unten anfange ist es der letze der beide teilt.
  for (i = 1; (i <= n) && (i <= k); i++){
	  if ((0 == n%i) && (0 == k%i)){	//wenn bei beiden kein Rest bleibt
		  teiler = i;					//dann merk ich mir den Teiler
	  }
  }
  //der letze Teiler ist der Größte
  return(teiler);

}

int main(void)  // Kopf des Hauptprogramms 'main'
{
  //Variablen festlegen
  int n, k; // Die Zahlen zu dem der ggt bestimmt werden soll

  
  //Eingaben
  printf("Dieses Programm berechnet den ggT zu zwei nat. Zahlen.\n");
  printf("Bitte geben Sie Ihren erste Zahl ein: ");
  scanf("%d", &n);
  
  printf("\nBitte geben Sie Ihren zweite Zahl ein: ");
  scanf("%d", &k);
  
  if((0 > n)||(0 > k)){
    printf("Dieser Wert ist unzulaessig.\nWir beenden das Programm.\n\n");
    return(1); // Rueckgabewert '1' von main heisst: 'Fehlerfall'
  }
  
  // Ausggabe des Antwortsatzes
  printf("Der ggT lautet: %i.\n", ggt(n,k)); // Aufruf der Funktion 'ggt'
  
  return(0); // Rueckgabewert '0' von main heisst: 'fehlerfrei'
}
