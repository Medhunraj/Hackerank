#include<stdio.h>
#include<stdlib.h>

void print(int *p,int n){
    for(int i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    printf("\n");
}

void swap(int *p,int *m){
    int temp=0;
    temp=*p;
    *p=*m;
    *m=temp;
}

void bubblesort(int *p,int a){
    for(int i=0 ;i<a-1; i++){
        for(int j=0 ;j<a-i-1;j++){
            if(p[j]>p[j+1]){
                swap(&p[j],&p[j+1]);
            }
            
        }
    }
}


void main(){
    int n;
    scanf("%d",&n);
    int *arr = (int *)malloc(sizeof(int)*n);
    for(int i=0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    print(arr,n);
    
}