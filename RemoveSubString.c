#include<stdio.h>
#include<string.h>
void print(char * str1){
    for(int i=0;str1[i]!='\0'&&str1[i]!='\n';i++){
        printf("%c",str1[i]);
    }
}

void swap(char *str1,int index,int n,int m){
    int i;
    for(i=index;i<m;i++){
        str1[i-n]=str1[i];
    }str1[i]='\0';
    
}

void main(){
    char str1[100];
    char str2[100];
    int j=0;
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    int n = strlen(str1);
    for(int i=0;i<n;i++){
      //printf("%d %d %d %d \n",n,strlen(str2),i,j);
      if(str1[i]==str2[j]){
        j++;
        
        if(j==strlen(str2)-1){
            swap(str1,i+1,strlen(str2)-1,n);
            j=0;
            i -= strlen(str2)-1;
            n -= strlen(str2)-1;
        }
      }else{
        j=0;
      }
    }print(str1);
}