#include <stdio.h>


main(){
    int c,i,nwhite,nother,npunctuation;
    int ndigit[10];

    nwhite=nother=npunctuation=0;
    for ( i = 0; i < 10; i++)
    {
         ndigit[i]=0;
    }
    

    while((c=getchar())!=EOF){
        if(c>='0' && c<='9'){
            ++ndigit[c-'0'];
        }
        else if (c==' '||c=='\t'||c=='\n')
            ++nwhite;
        else if (c == '.' || c==',')
            ++npunctuation;
        else
            ++nother;
    }

    printf("Digitos =");
    for ( i = 0; i < 10; i++)
        printf("%d", ndigit[i]);
    printf(", espacios blancos = %d, otros = %d, signos de puntuacion= %d\n",nwhite,nother,npunctuation);
}