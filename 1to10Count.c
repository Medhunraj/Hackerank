#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count=0;
    char a[1000];
    fgets(a,1000,stdin);
    for(int i=0;i<=9;i++){
        count=0;
        for(int j=0;a[j]!='\0';j++){
            if(i==a[j]-'0')
            count++;
            
            }
           printf("%d ",count);
    }    
    return 0;
}