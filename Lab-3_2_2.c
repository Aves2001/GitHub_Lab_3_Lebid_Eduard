#include <stdio.h>
#include <conio.h>
#include <windows.h>

char n = 0;

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

printf ("\r\nn = ");
scanf ("%d", &n);
printf ("\r\n");
if (1 <= n && 12 >= n)
{
	switch (n)
	{
		case 1: printf("СІЧЕНЬ\n"); break;
		case 2: printf("ЛЮТИЙ\n"); break;
		case 3: printf("БЕРЕЗЕНЬ\n"); break;
		case 4: printf("КВІТЕНЬ\n"); break;
		case 5: printf("ТРАВЕНЬ\n"); break;
		case 6: printf("ЧЕРВЕНЬ\n"); break;
		case 7: printf("ЛИПЕНЬ\n"); break;
		case 8: printf("СЕРПЕНЬ\n"); break;
		case 9: printf("ВЕРЕСЕНЬ\n"); break;
		case 10: printf("ЖОВТЕНЬ\n"); break;
		case 11: printf("ЛИСТОПАД\n"); break;
		case 12: printf("ГРУДЕНЬ\n"); break;
	} 
} else printf("Неправильне введення!!!\n");



// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}