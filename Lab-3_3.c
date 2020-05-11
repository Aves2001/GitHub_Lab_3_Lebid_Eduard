#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

double x = 0;
double y = 0;
double f = 0;

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

printf ("\r\nx = ");
scanf ("%lf", &x);

printf ("y = ");
scanf ("%lf", &y);


double a1 = x+y;
double a2 = pow(x,2);
double a3 = x*y;
double a4 = pow(y,2);
double a5 = a4;
double a6 = a2;
double b1 = a2+a3-a4;	//n1
double b2 = 1-a5;		//n2
double b3 = 1+a6;		//n3
double c1 = a1;			//v1
double c2 = x;			//v2
double c3 = y;			//v3
double f1 = (c1/b1);
double f2 = (c2/b2);
double f3 = (c3/b3);
double f = f1 + f2 + f3;

if (b1 == 0 || b2 == 0 || b3 == 0)
{
	printf("\r\nДля заданих значень X та Y у обчислюваному виразі виконується ділення на 0\r\n");
} else printf ("\r\nf = %.2f\r\n", f);

// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}