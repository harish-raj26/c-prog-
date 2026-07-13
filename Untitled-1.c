#include <stdio.h>
#include<conio.h>
int main() {
    int i = 1;

    int n;
    scanf("%d",&n);
    repeat :
            if (i<=10){
            printf("%d*%d=%d\n",n,i,n*i);
        i++;
        goto repeat;
            }




    return 0;
}
