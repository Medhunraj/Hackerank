#include<stdio.h>
#include<math.h>

int isPrime(int n){
    for(int j = 2; j < sqrt(n); j++){
        if(n%j==0)
            return 0;
    }

    return 1;
}

void main(){
    int a = 0;
    int ans = 2;
    int count = 1;
    scanf("%d",&a);

    int i = 3;
    for(int i=3;i<=100000;i++){

        if( isPrime(i) == 1 ) 
            count++;
      
        if(count==a){
            ans=i;
            break;
        }
            
        i++;
    }
    
    printf("%d",ans);

}