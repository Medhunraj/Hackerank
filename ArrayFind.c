#include<stdio.h>
void main(){
    int n;
    int m;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        m=j;
        if(arr[j]==arr[j+1]){
            count+=1;
            while(arr[m]==arr[m+1]){
                j++;
                m++;
            }
            }
        
    
    
    }printf("%d",count);

}