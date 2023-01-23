#include<stdio.h>

void swap(int* j,int* min){
    int t;
    t=*j;
    *j=*min;
    *min=t;
}

void selectionsort(int *arr,int n){
    int min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}

void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
}