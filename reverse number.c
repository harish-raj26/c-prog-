#include<stdio.h>
#include<conio.h>
int main(){
int n;
int temp;
int rev;
scanf("%d",&n);
temp=n;
while(temp>0){


rev=rev*10+(temp%10);
temp=temp/10;
}
printf("%d",rev);



 return 0;}
