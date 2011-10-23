#include <math.h>
#include <stdio.h>

int main() {
long double x, z, y, p;

printf("podaj liczbę rzeczywistą: " );
scanf("%Lf", &x, &z);

miejsce_skoku1:
if (x < 0)
{
printf("nie można obliczyć pierwiastka z liczby ujemnej\n ");
printf("podaj dodatnią liczbę rzeczywistą: " );
scanf("%Lf", &x);
goto miejsce_skoku1;} else
{y = sqrtl(x);
printf("pierwiastek kwadratowy z %.14Lf to %.14Lf\n", x,y);}


miejsce_skoku2:
if (z = 0)
{
printf("nie można ustalić odwrotności liczby zero\n ");
printf("podaj liczbę różną od zera: " );
scanf("%Lf", &z);
goto miejsce_skoku2;} else
{p = (1/z);
	printf("odwrotność to  %.Lf", z,p);}


}
