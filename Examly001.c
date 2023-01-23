#include<stdio.h>
#include<stdlib.h>

void _remove(int* arr,int a){
    
    for(int i=0;i<a-1;i++){
        arr[i]=arr[i+1];
    }

}

void _insert(int* arr,int b,int c){
    for(int i=b;i>=b/2;i--){
        arr[i]=arr[i-1];
    }
    arr[b/2]=c;
}
void main(){
    int z;
    int n;
    scanf("%d",&n);

    int k;
    scanf("%d",&k);

    int * arr = (int *) malloc(sizeof(int)*n);
    for(int i=0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;n > 1 ;i++){
        z = (arr[0]+arr[n-1])%k;

        _remove(arr,n);
        n=n-2;

        _insert(arr,n,z);
        n=n+1;

        for(int j=0 ;j<n ;j++){
            printf("%d, ",arr[j]);
        }printf(" [n:%d] [i:%d]\n",n,i);

    }

    printf("%d",arr[0]);

}