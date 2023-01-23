#include<stdio.h>

void insertionsort(int *arr,int n){
    int j;
    int temp;
    for(int i=1;i<n;i++){
        j=i-1;
        temp=arr[i];
        while(j>=0 && arr[j]>arr[j+1]){
            arr[i]=arr[j];
            arr[j]=temp;
            j--;  
        }
    }
}

void main(){
    int n=5;
    int arr[5]={5,7,6,8,9};
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}