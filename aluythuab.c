#include <stdio.h>
int main (){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=1;
    while (b>0)
    {
        c=c*a;
        b--;
    }
    printf("%d",c);
    return 0;
}