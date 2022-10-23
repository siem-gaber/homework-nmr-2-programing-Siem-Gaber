#include <stdio.h>

/*******************************************************************************
* electrical_print: Skriver ut sp�nning, str�m och skriver ut resistansen genom att dividera sp�nnignen med str�men.
*******************************************************************************/

 void electrical_print(float V, float mA, float KOhm)
{
	printf("Voltage: %.1f V\n", V );
	printf("Current: %.1f mA\n", mA);
	printf("Resistance: %.1f KOhm\n", KOhm);
	return 0;
}

 /******************************************************************************
 * main: Tar emot och tillderar vrden till electriva_print funktionen
 *samt "aktiverar" electrical_print funktionen.
 *******************************************************************************/

int main(void)
{
	float V = 3.4;
	float mA = 6.8;
	float KOhm = V/mA;
	KOhm = V / mA;
	electrical_print(V, mA, V/mA );
	return 0;
}




/*Skapa ett program d�r tre flyttalsvariabler voltage, current samt resistance deklareras i funktionen main. Tilldela sedan
nedanst�ende v�rden till variablerna genom att skicka deras respektive adress till funktionen electrical_set:
voltage = 3.4 V
current = 6.8 mA
resistance = voltage / current
Genomf�r sedan utskrift av v�rdena via anrop av en funktion d�pt electrical_print. Utskriften skall ske i terminalen och
skall se ut s�som nedan:
-------------------------------------------------------------------------------------------------------
Voltage: 3.4 V
Current: 6.8 mA
Resistance: 0.5 kOhm
-------------------------------------------------------------------------------------------------------*/