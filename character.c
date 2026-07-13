#include<stdio.h>
#include<ctype.h>
#include<conio.h>

int main(){
char a;
scanf("%c",&a);
if (isalpha(a)){
 printf("is alphabet");

}
else if(isdigit(a)){
    printf("number");

}
else{
printf("speacial");}
}
