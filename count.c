#include<stdio.h>
int main()
{
 int n,i,c;
 scanf("%d",&n);
 c=n;
 while(c>0)
 {
  c=c/10;
  i++;
 }
 printf("The digit is %d",i);
 return 0;
} 
