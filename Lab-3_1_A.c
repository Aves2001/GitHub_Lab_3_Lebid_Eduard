#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

int a = 0;
float b = 0;
float c = 0;

int chcp, chcpOut = 0;
int main(void)
{
// память chcp
	chcp = GetConsoleCP();
	chcpOut = GetConsoleOutputCP();

// UTF-8
	SetConsoleCP(65001);                
	SetConsoleOutputCP(65001);
//

printf("a = ");
scanf ("%d",&a);
printf("c = ");
scanf ("%f",&c);



if (a == 2) b = (a*a-4*c) / (4*a*c);
if (a == 4) b = sqrt(a*c-2*a);
if (a == 6) b = c*c-4*a;

if (a == 2 || a == 4 || a == 6) printf("\r\nb = %g\r\n", b);
if (a !=2 && a != 4 && a !=6) printf("\r\nНеможливо обчислити!\r\n");

// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}