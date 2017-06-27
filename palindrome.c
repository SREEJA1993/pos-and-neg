#include<stdio.h>
#include<math.h>
int main()
{
 int n,r,i=0,temp;
 scanf("%d",&n);
 temp=n;
 while(n!=0)
 {
  r=n%10;
  i=i*10+r;
  n/=10;
 }
 if(r==temp)
 printf("%d is palindrom");
 else
 printf("%d is not a palindrome");
 return 0;
} 
