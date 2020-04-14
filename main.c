#include <windows.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BLUE      0x0001
#define GREEN     0x0002
#define RED       0x0004
#define INTENSITY 0x0008
#define YELLOW    0x0006 
#define WHITE     0x0007

void textcolor(WORD color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


 int main()
 {
 	char f1[3][3];
 	int r;
 	int s;
 	int counter = 0;
 	int i = 0;
	int player = 1;
	int temp;
	char n[16] = "";
	char n2[16]= "";
	char jn = 0;
                                                                                        textcolor(BLUE + INTENSITY);
 
   printf("                                                                       Willkommen zu einer Runde Tic Tac Toe\n\n");
   sleep(2);                                                   								textcolor(YELLOW);
   printf("                                                                                  So wird gespielt: \n");
																						 textcolor(BLUE + INTENSITY);
   sleep(1);
   printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
   sleep(1);
   printf("  --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
   sleep(1);
   printf("     --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
   sleep(1);  textcolor(YELLOW);
   printf("    Das Ziel ist es drei X oder O in der diagonalen, waagrechten oder in der senkrechten gleich zu haben, klarerweise sollte man ein/e bereits gesetze/s X oder O nicht ueberschreiben.\n\n");
   sleep(4);  textcolor(BLUE + INTENSITY);
   printf("                                                                           Na dann. Viel Spass beim Spielen! :D\n\n");
   sleep(1);
   printf("     --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
   sleep(1);
   printf("  --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
   sleep(1);
   printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n\n");
   printf("                                                                              So sieht das Spielfeld aus\n");
   sleep(2);
   printf("\n\n\n\n\n");
   
  	
    textcolor(WHITE); 
	
   for (r = 0; r < 3; r++) {
	   printf("                                                                                 ");
     for (s = 0; s < 3; s++) {
		 f1[r][s] = 0;
       printf("%d.%d[%c] ", r + 1, s + 1, f1[r][s]);
     }

     printf("\n\n");
   }

   printf("\n\n\n\n\n");
	textcolor(BLUE + INTENSITY);
    sleep(3); 
 do {
	printf("Spieler 1 geben Sie bitte ihren Spielernamen ein: ");
	fflush(stdin);
	gets(n);
	printf("Spieler 2 geben Sie bitte ihren Spielernamen ein: ");
	fflush(stdin);
	gets(n2);
	printf("\n\nMoechten Sie etwas an ihrer Eingabe veraendern? [j][n]: ");
	scanf("%c", &jn);
 }while(jn != 'n');
	printf("\n\n\n\n");
	
	
  while (i != 1 && counter < 9)
 	{
		if(player == 1) {temp = 1;}
		if(player == -1) {temp = 2;}
 		printf("Spieler %d gib bitte die Koordinate der Reihe ein: ", temp);
 		scanf("%d", &r);
		r -= 1;
 		printf("Gib bitte die Koordinate der Spalte ein:          ");
 		scanf("%d", &s);
		s -= 1;
 		system("cls");

 			if (r > 2 || r < 0 || s > 2 || s < 0 || f1[r][s] == 'X' || f1[r][s] == 'O')
     {
					textcolor(WHITE);
 				for (r = 0; r < 3; r++){
					 printf("                                                                                 ");
 					for (s = 0; s < 3; s++)
 					{
 						printf("%d.%d[%c] ", r + 1, s + 1, f1[r][s]);
 					}

 					 printf("\n\n");
 				}
					textcolor(RED + INTENSITY); 
 				printf("\aFalsche Eingabe!!!\n");
					textcolor(BLUE + INTENSITY);
 		}
		
	else
	{
   
    if(player == 1) {f1[r][s] = 'X';}
	if(player == -1) {f1[r][s] = 'O';}
 		 
						textcolor(WHITE);
 			for (r = 0; r < 3; r++){
				 printf("                                                                                 ");
 				for (s = 0; s < 3; s++)
 				{  
 					printf("%d.%d[%c] ", r + 1, s + 1, f1[r][s]);
 				}

 				printf("\n\n");
 			}
						textcolor(BLUE + INTENSITY);

       

    	if (f1[0][0] == 'X' && f1[0][1] == 'X' && f1[0][2] == 'X' || f1[1][0] == 'X' && f1[1][1] == 'X' && f1[1][2] == 'X' || f1[2][0] == 'X' && f1[2][1] == 'X' && f1[2][2] == 'X' ||
 			f1[0][0] == 'X' && f1[1][1] == 'X' && f1[2][2] == 'X' || f1[0][2] == 'X' && f1[1][1] == 'X' && f1[2][0] == 'X' || f1[0][0] == 'X' && f1[1][0] == 'X' && f1[2][0] == 'X' ||
 			f1[0][1] == 'X' && f1[1][1] == 'X' && f1[2][1] == 'X' || f1[0][2] == 'X' && f1[1][2] == 'X' && f1[2][2] == 'X')
 		{
				textcolor(GREEN + INTENSITY); 
			printf("Und der Gewinner ist.... ");
			sleep(2);
 			printf("%s!!!\a\n", n);
				textcolor(BLUE + INTENSITY); 
        i = 1;
 		}
	
 		else if (f1[0][0] == 'O' && f1[0][1] == 'O' && f1[0][2] == 'O' || f1[1][0] == 'O' && f1[1][1] == 'O' && f1[1][2] == 'O' || f1[2][0] == 'O' && f1[2][1] == 'O' && f1[2][2] == 'O' ||
 			f1[0][0] == 'O' && f1[1][1] == 'O' && f1[2][2] == 'O' || f1[0][2] == 'O' && f1[1][1] == 'O' && f1[2][0] == 'O' || f1[0][0] == 'O' && f1[1][0] == 'O' && f1[2][0] == 'O' ||
 			f1[0][1] == 'O' && f1[1][1] == 'O' && f1[2][1] == 'O' || f1[0][2] == 'O' && f1[1][2] == 'O' && f1[2][2] == 'O')
 		{
						textcolor(GREEN + INTENSITY); 
			printf("Und der Gewinner ist.... ");
			sleep(2);
 			printf("%s!!!\a\n", n2);
						textcolor(BLUE + INTENSITY); 
       
       i = 1;
      
 		}
		
			 else if(counter == 8) 
    { 
			textcolor(GREEN + INTENSITY);
      printf("\aDas war wohl ein Unentschieden");  
			textcolor(BLUE + INTENSITY);  
     
    }
	
	counter++;
	player *= -1;
		}
 	}
   
 	return 0;
 }