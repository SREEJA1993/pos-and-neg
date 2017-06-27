#include<stdio.h>
#include<math.h>
int main()
{
     int a,i,c;
     scanf("%d",&a);
     for(i=1;i<=a;i++)
     {
         if(i%2==0)
         {
             printf("%d\t",i);
         }
     }  
    return 0;
}
