#include <stdio.h>

void subtract(float a, float b, float c)
{
	printf("%.1f - ", a);
	printf("%.1f = ", b);
	printf("%.1f\n", c);
	return 0;
}


int main()
{

	float a = 3.4;
	float b = 6.8;
	float c = a - b;
	c = a - b;
	subtract(a, b, a - b);
	return 0;

}




/*I denna uppgift skall tv� versioner av samma program genomf�ras f�r att demonstrera returnering av v�rde via stacken
j�mf�rt med lagring av returv�rde p� en given adress.
a) Skriv ett program inneh�llande en funktion d�pt subtract, som returnerar differensen av tv� flyttal x och y. Deklarera tv�
variabler a och b i funktionen main, tilldela flyttal 3.4 respektive 6.8 vid start. Anropa sedan funktionen subtract och lagra
returv�rdet i en variabel d�pt c. Skriv ut differensen p� formen a - b = c, vilket skall resultera i utskriften �3.4 - 6.8 = -3.4�.
b) Modifiera ovanst�ende program, s� att funktionen subtract inte har n�got returv�rde. I st�llet skall differensen x � y lagras
p� en angiven adress z, som passeras vid funktionsanropet. Se till att differensen efter funktionsanropet lagras p� adressen
till variabeln c i main och genomf�r sedan utskrift igen.
c) Av ovanst�ende versioner, vilken f�redrar du? Ser du n�gon f�rdel med att passera adressen till ett objekt i st�llet f�r en
kopia, exempelvis f�r ett st�rre objekt s�som en str�ng?*/