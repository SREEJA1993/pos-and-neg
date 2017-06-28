#include<stdio.h>
#include<math.h>
  
int main()
{
    int a,b,i,t1,t2,r=0,s,n=0;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;++i)
    {
        t2=i;
        t1=i;

    while(t1!=0)
    {
        t1 /= 10;
        ++n;
    }
    
    while(t2!=0)
    {
        r = t2%10;
        s += pow(r,n);
        t2 /= 10;     
    }
    if(s==i)
    {
       printf("%d\n",i); 
    }
        s=0;
        n=0;
}
    
    return 0;
}
