#include<stdio.h>
#include<conio.h>

void main(){
int a;
clrscr();
printf("enter the value of a: ");
scanf("%d",&a);
if(a<0){
  printf("This number is Negative\n");
}else if(a==0){
  printf("This number is Neutral\n");
}else if(a>0){
  printf("This number is Positive\n");
}
getch();
}