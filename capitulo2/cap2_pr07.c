#include <stdio.h>
int fahr_a_cel(int fahr);
main(){
    int n;
    n=0;
    
    n = fahr_a_cel(10);

    printf("%d", n);

}
int fahr_a_cel(int fahr){
    int cels = 0;
    
    cels = (5.0/9.0)*(fahr-32);
    return cels;

}