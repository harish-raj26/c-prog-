#include<stdio.h>
#include<conio.h>
int main(){
int n;
int fact=1;
scanf("%d",&n);
if (n==1||n==0){
printf("factorial is 1");}
else{
 for(int i=2;i<=n;i++){
 fact=fact*i;}
 printf("%d",fact);}
 return 0;}
