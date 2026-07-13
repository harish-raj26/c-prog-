
#include <stdio.h>
#include<conio.h>
int main() {
    int i = 1;
    int fact=1;
    int n;
    scanf("%d",&n);
    repeat :
        if (n==0 ||n==1){
                fact=1;
        }
         else{
            if (i<=n){
                fact*=i;
        i++;
        goto repeat;
            }
            }
            printf("%d",fact);


    return 0;
}
