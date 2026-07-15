#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int n;
scanf("%d",&n);
int a;
int k;
a=n;
int original=n;
int sum=0;
int co=0;
while(a>=1){
a=a/10;
co++;
}

 while(n>=1){
 k=n%10;
 int power=pow(k,co);
 sum=sum+power;
 n=n/10;
 ;}
 if (sum==original){
 printf("is amstrong");
 }else{
 printf("not amstrong");}
 return 0;}
