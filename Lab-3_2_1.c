#include <stdio.h>
#include <conio.h>
#include <windows.h>

float x = 0;
float y = 0;

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

printf("\r\nВведіть координати точки\r\n");
printf("\r\nx = ");
scanf ("%f",&x);
printf("y = ");
scanf ("%f",&y);

if ((x>0) && (y>0)) printf("\r\n 1 квадрант\n");
	else if ((x<0) && (y>0)) printf("\r\n 2 квадрант\n");
		else if ((x<0) && (y<0)) printf("\r\n 3 квадрант\n");
			else if ((x>0) && (y<0)) printf("\r\n 4 квадрант\n");
				else if (x==0 && y==0) printf("\r\n Точка на початку координат\n");
					else if ((x==0) && (y>0) || (y<0)) printf("\r\n Точка на осі Y\n");
						else if ((x<0) || (x>0) && (y==0)) printf("\r\n Точка на осі X\n");

// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}