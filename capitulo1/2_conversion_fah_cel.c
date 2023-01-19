/*
Curso C Libro Kenighan & Ritchie

Variables, Expresiones e Interacciones
*/

#include <stdio.h>

main(){
    float fahr,celsius;
    int lower,upper,step;

    lower=0;
    upper=300;
    step=20;

    fahr = lower;
    printf("F\t|\tC\n");
    
    
    
    
    
    while (fahr <= upper)
    {
        celsius = (fahr-32.0)*(5.0/9.0);
        printf("%3.0f\t|\t%6.1f\n",fahr,celsius);
        fahr = fahr+step;
    }
    

}
