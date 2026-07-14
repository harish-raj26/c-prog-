#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int n;
int x;
scanf("%d",&x);
scanf("%d",&n);
 for(int i=1;i<=n;i++){
float power=pow(x,i);
 printf("%d**(-%d)=%2f\n",x,i,1/power);
 }

 return 0;}
