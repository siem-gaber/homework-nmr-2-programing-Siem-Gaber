#include <stdio.h>

float subtract(float x, float y, float* z)
{
	*z = x - y;
	return;
}

int main()
{
  
	float a = 3.4;
	float b = 6.8;
	float c;

	subtract(a, b, &c);
	
	printf("%lg - %lg = %lg \n",a, b, c);
}
