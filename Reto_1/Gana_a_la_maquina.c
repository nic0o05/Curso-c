#include <stdio.h>
#include <stdlib.h>
#include<time.h>

char player1;
char player2;
char num_aleatorio;
int comienza;
int puntos = 0;
int puntos2 = 0;




main(){
//inicio:;
srand (time(NULL)); //Hace que el numero siempre sea aleatorio
num_aleatorio = rand() % (122-97+1) + 97;   //Esta entre 97 y 122
comienza = rand() % 2+1;    //Elige quien comienza
//char letra_aleatoria = num_aleatorio + '0';
printf("%d",num_aleatorio);
printf("\nLISTO \nYa se escogio una letra, ahora intenta adivinar\n");
printf("Tu eres el jugador uno y la maquina el 2\n");
printf("Comienza el jugador %d \n", comienza);

if (comienza == 1)
{
    while (player1 != num_aleatorio || player2 != num_aleatorio)
    {
    secuencia1:;
    printf("Tu turno\n");
    player1 = getchar();
        if (player1 == num_aleatorio)
        {
            printf("Felicitaciones, has ganado\n");
            getchar();
            goto fin;
            
        }
        else if (player1 > num_aleatorio)
        {
            printf("La letra debe ser menor\n");
            getchar();
        }
        else if (player1 < num_aleatorio){
            printf("La letra debe ser mayor\n");
            getchar();
        }
        

        
        printf("Turno del jugador 2\n");
        
        srand (time(NULL));
        player2 = rand() % (122-97+1) + 97;
        
        if (player2 == num_aleatorio)
        {
            printf("A ganado el BOT, ENTER PARA CONTINUAR\n");
            getchar();
            goto fin;
        }
        else if (player2 > num_aleatorio)
        {
            printf("La letra del BOT es mayor, ENTER PARA CONTINUAR\n");
            getchar();
            goto secuencia1;
        }
        else if (player2 < num_aleatorio){
            printf("La letra del BOT es menor, ENTER PARA CONTINUAR\n");
            getchar();
            goto secuencia1;
        }
        
            
        
    
    
    }
}

if (comienza == 2)
{
    while (player1 != num_aleatorio || player2 != num_aleatorio)
    {
        
        printf("Turno del jugador 2\n");
        
        
        
        if (player2 == num_aleatorio)
        {
            printf("A ganado el BOT, ENTER PARA CONTINUAR\n");
            getchar();
            goto fin;
        }
        else if (player2 > num_aleatorio)
        {
            printf("La letra del BOT es mayor, ENTER PARA CONTINUAR\n");
            getchar();
            goto secuencia2;
        }
        else if (player2 < num_aleatorio){
            printf("La letra del BOT es menor, ENTER PARA CONTINUAR\n");
            getchar();
            goto secuencia2;
        }
        
        secuencia2:;
        srand (time(NULL));
        player2 = rand() % (122-97+1) + 97;
        printf("Tu turno\n");
        player1 = getchar();
        if (player1 == num_aleatorio)
        {
            printf("Felicitaciones, has ganado\n");
            getchar();
            goto fin;
            
        }
        else if (player1 > num_aleatorio)
        {
            printf("La letra debe ser menor\n");
            getchar();
        }
        else if (player1 < num_aleatorio){
            printf("La letra debe ser mayor\n");
            getchar();
        }
        

        
        
        
            
        
    
    
    }
}


fin:;
}
