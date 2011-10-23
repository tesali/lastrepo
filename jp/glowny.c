#include <math.h>
#include <stdio.h>

int main() {
long double x, y;

printf("podaj liczbę rzeczywistą: " );
scanf("%Lf", &x);


if (x <= 0)
{
printf("error\n ");
} else


{y = sqrtl(x);

printf("pierwiastek kwadratowy z %.14Lf to %.14Lf\n", x,y);

return 0;}
}
