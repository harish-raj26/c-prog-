#include<stdio.h>
#include<conio.h>
int main(){
int n;
int sum=0;
scanf("%d",&n);
 for(int i=0;i<=n;i=i+2){
 sum=sum+i;
 }
 printf("sum of even is :%d",sum);
 return 0;}
