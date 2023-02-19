#include <stdio.h>



int power(int base, int n);
main(){
    int i;


    for ( i = 0; i < 10; i++)
        printf("%d %d %d\n",i,power(2,i),power(-3,i));
    
    return 0;
   


}

int power(int base, int n){
    int i;
    int resultado;
    resultado = 1;
    for (i = 1; i <= n ; i++)
    {
        resultado = base*resultado;
    
    }
    return resultado;    
    
}
