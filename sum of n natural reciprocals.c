#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int n;
float sum;
float a;
scanf("%d",&n);
 for(float i=1;i<=n;i++){
     a=1.0f/pow(i,i);
     printf("%f\n",a);
    sum=sum+a;
 }
 printf("%f",sum);
 return 0;}
