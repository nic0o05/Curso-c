#include <stdio.h>

main(){
int nl,tab,bl,c;
nl = 0;
tab = 0;
bl = 0;

while ((c=getchar()) != EOF)
{
    if (c=='\t')
    {
        ++tab;
    }
    if (c=='\n')
    {
        ++nl;
    }
    if (c==' ')
    {
        ++bl;
    }
}


printf("%d %d %d", nl, tab, bl);




}

