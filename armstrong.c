#include<stdio.h>
#include<math.h>
  
int main()
{
    int n,temp,r,s=0,i=0;
    scanf("%d",&n);
    temp=n;
    while(temp != 0)
    {
        temp /= 10;
        ++i; 
    }
    temp=n;
    while(temp != 0)
    {
        r = temp%10;
        s += pow(r,i);
        temp /= 10;     
    }
    if(s==n)
    {
       printf("%d is armstrong number",n); 
    }
    else
    {
     printf("%d is not a an armstrong number",n);   
    }
    return 0;
}
