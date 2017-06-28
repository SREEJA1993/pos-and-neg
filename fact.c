#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 1;
    scanf("%d",&n);
    if (n > 0)
    {
        
      for(i=1; i<=n; ++i)
        {
            factorial *= i;              
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
    else
    {
       printf(" Factorial of a negative number doesn't exist.");

    }
    
    return 0;
}

