/*******************************************************************************
* 2.2.c: Rättning av felkod. I programmet skall Kalle Anks namn, ålder och
*        sysselsättning (serietidningsfigur) skrivas ut i terminalen.
*        Programmet kompilerar dock inte på grund av ett antal fel, som
*        därmed måste korrigeras.
*******************************************************************************/
#include <stdio.h>

/*******************************************************************************
* person_print: Skriver ut personuppgifter i form av namn, ålder samt arbete.
*******************************************************************************/
static void* person_print(const char* name, const char *age, const char* occupation)
{
	printf("Name: %s\n", name);
	printf("Age: %s\n", age);
	printf("Occupation: %s\n", occupation);
   return 0;
}

/*******************************************************************************
* main: Skriver ut angivna personuppgifter. 
*******************************************************************************/
int main(void)
{
   person_print("Donald Duck", "88", "Cartoon character");
   return 0;
}
