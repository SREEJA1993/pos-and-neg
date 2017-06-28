#include<stdio.h>
  
int main(){
  
    int N, i, j, f, n;
    scanf("%d",&N);
    
    for(i = 2; i <= N; i++){
        f = 0;
        for(j = 2; j <= i/2; j++){
            
             if(i % j == 0){
                 f = 1;
                 break;
             }
        }
         if(f==0 && N!= 1)
            printf("%d ",i);
    }
   return 0;
}
