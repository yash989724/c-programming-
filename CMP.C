#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
 float p , r , t , am ;
 clrscr();
 printf("Enter the principle rate time\n ");
 scanf("%f %f %f",&p,&r,&t);
 r = r/100 ;
 am = p*pow((1+(r/12)),12*t)   ;

 printf("\n%f " , am);
 getch();



}