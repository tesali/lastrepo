#include <stdio.h>
#include <math.h>
int main()
{
int x, y, z;

printf("podaj pierwsza liczbe calkowita: ");
scanf("%d", &x);
printf("podaj druga liczbe calkowita: ");
scanf("%d", &y);
printf("podaj trzecia liczbe calkowita: ");
scanf("%d", &z);

printf("suma: %d\n", x+y+z);
printf("iloczyn: %d\n", x*y*z);

if (x>y)
{
if (x>z)
{
printf("największa liczba to %d\n", x);
}
else
{
printf("największa liczba to: %d\n", z);
}
}
else
{
if (y>z)
{
printf("największa liczba to: %d\n", y);
}
else
{
printf("największa liczba to: %d\n", z);
}
}
return 0;
}
