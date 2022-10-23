#include <stdio.h>

/*******************************************************************************
* electrical_print: Skriver ut spänning, ström och skriver ut resistansen genom att dividera spännignen med strömen.
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




/*Skapa ett program där tre flyttalsvariabler voltage, current samt resistance deklareras i funktionen main. Tilldela sedan
nedanstående värden till variablerna genom att skicka deras respektive adress till funktionen electrical_set:
voltage = 3.4 V
current = 6.8 mA
resistance = voltage / current
Genomför sedan utskrift av värdena via anrop av en funktion döpt electrical_print. Utskriften skall ske i terminalen och
skall se ut såsom nedan:
-------------------------------------------------------------------------------------------------------
Voltage: 3.4 V
Current: 6.8 mA
Resistance: 0.5 kOhm
-------------------------------------------------------------------------------------------------------*/