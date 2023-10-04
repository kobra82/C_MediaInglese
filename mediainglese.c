#include <stdio.h>
#include <conio.h>
#include <windows.h>
char squadra[13];
int main()
{
system("cls");
printf("\n");
printf("Calcolo media inglese\n");
printf("\n");
printf("Inserisci numero squadre torneo: ");
int j;
scanf("%d", &j);
printf("\n");
int tot=(j-1)*2;
int vc, pc, sc, tc;
printf("Inserisci numero vittorie in casa: ");
scanf("%d",&vc);
printf("Inserisci numero pareggi in casa: ");
scanf("%d",&pc);
printf("Inserisci numero sconfitte in casa: ");
scanf("%d",&sc);
tc=(vc+pc+sc);
int vt, pt, st, tt;
printf("\n");
printf("Inserisci numero vittorie in trasferta: ");
scanf("%d",&vt);
printf("Inserisci numero pareggi in trasferta: ");
scanf("%d",&pt);
printf("Inserisci numero sconfitte in trasferta: ");
scanf("%d",&st);
tt=(vt+pt+st);
if ((vc+pc+sc+vt+pt+st)==tot && (tt=tc))
{
printf("\n");
int mediainglese =((vc*0)+(pc*-2)+(sc*-3)+(vt*2)+(pt*0)+(st*-1));
printf("Media inglese = %d",mediainglese);
getch();
printf("\n\n");
printf("Vuoi calcolare la media per un'altra squadra (1= si 0= no): ");
int i;
scanf("%d",&i);
if (i==1)
{
system("cls");
system("12mediainglese");
}
else 
{
printf("\n");
printf("Grazie per aver usato questo programma. Premere INVIO per terminare.");
getch();
system("exit");
}
}
else
{
printf("\n");
printf("Dati non corretti. riprovare"); 
getch(); 
system("cls"); 
system("12mediainglese");
}
}
