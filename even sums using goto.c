#include <stdio.h>
#include<conio.h>
int main() {
    int i =2;
    int sum=0;
    int n;
    scanf("%d",&n);
    repeat :
            if (i<=n){
            sum=sum+i;
        i=i+2;
        goto repeat;
            }
printf("%d",sum);



    return 0;
}
