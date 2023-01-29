#include <stdio.h>
#include <stdlib.h>
#include<time.h>
correcta;
char player1;
char player2;
char num_aleatorio;
int comienza;
int puntos = 0;
int puntos2 = 0;




main(){
srand (time(NULL)); //Hace que el numero siempre sea aleatorio
num_aleatorio = rand() % (122-97+1) + 97;   //Esta entre 97 y 122
comienza = rand() % 2+1;    //Elige quien comienza
//char letra_aleatoria = num_aleatorio + '0';
printf("%d",num_aleatorio);
printf("\nLISTO \nYa se escogio una letra, ahora intenta adivinar, quien adivine ganara 10 puntos\n");
printf("Tu eres el jugador uno y la maquina el 2\n");
printf("Comienza el jugador %d \n", comienza);

if (comienza == 1)
{
    while (num_aleatorio != player1 || num_aleatorio != player2)
    {
        player1 = getchar();
        if (player1 == num_aleatorio)
        {
            printf("Felicitaciones, has ganado\n");
        }
        else if (player1 != num_aleatorio)
        {
            printf("Suerte en la proxima\n");
        }
        
        
    }
    
}









/*if (comienza == 1) {
    
    while (puntos <= 30 || puntos2 <= 30)
    {
    printf("Te toca \n");
    player1 = getchar();
    
    if (num_aleatorio == player1){
    printf("Felicitaciones\n");
    printf("Has ganado 10 puntos\n");
    puntos+10;
    }
    
    else if (num_aleatorio != player1)
    {
    printf("Incorrecta\n");
    printf("Suerte en la proxima\n");
    }
    
    
    
    printf("--------------------------------------------------\n");

    printf("Turno del jugador 2\n");
    player2 = rand() % (122-97+1) + 97;

    if (num_aleatorio == player2){
    printf("La maquina gano 10 puntos\n");
    puntos2+10;
    }
    
    else if (num_aleatorio != player2)
    {
    printf("Incorrecta\n");
    printf("Suerte en la proxima\n");
    }
    
    }
    
    






    }






if (comienza == 1)
{
     player1 = getchar();
     if (letra_aleatoria == player1){
        printf("Felicitaciones")
     }
     
}*/
















}