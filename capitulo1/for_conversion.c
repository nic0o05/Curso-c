/*
Curso C Libro Kenighan & Ritchie

Variables, Expresiones e Interacciones
*/

#include <stdio.h>

main(){
     int fahr;
    // int lower,upper,step;

    // lower=0;
    // upper=300;
    // step=20;

    // fahr = lower;
    //printf("F\t|\tC\n");
    
    
    for (fahr=0;fahr<=300;fahr = fahr+20)
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }
    
    
    
    // while (fahr <= upper)
    // {
    //     celsius = (fahr-32.0)*(5.0/9.0);
    //     printf("%3.0f\t|\t%6.1f\n",fahr,celsius);
    //     fahr = fahr+step;
    // }
    

}
