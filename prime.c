#include<stdio.h>
#include<math.h>
int main()
{
     int a,i,c;
     scanf("%d",&a);
    
    for(i=1;i<=a;i++) 
     {
      if(a%i==0)  
      {
          c++;
      }
    }
        if(c==2)
        {
          printf("%d is prime number",a);
        }
    else 
    {
       printf("%d is not a prime number",a);
    }

    return 0;
}
