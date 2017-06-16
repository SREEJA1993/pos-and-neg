#include<stdio.h>
#include<conio.h>
int main()
{
 int a;
 printf("Enter the year\n");
 scanf("%d\n",&a)
 if((a%4==0)&&(a%100==0))
 {
  printf("It is a leap year\n");
 }
 else
 {
  printf("It is not a leap year\n");
 }
 return 0;
 }
 
