#include <stdio.h>
#include<conio.h>
#include<math.h>
int main() {
    int rang=1;
    int n;
    int power;
    int result=1;
    scanf("%d",&n);
      scanf("%d",&power);
    repeat :
            if (rang<=power){
                    result=result*n;
                    printf("%d**%d=%d\n",n,rang,result);
        rang++;
        goto repeat;
            }


    return 0;
}
